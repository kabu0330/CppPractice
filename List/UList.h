#pragma once
#include <BaseSystem/EngineDebug.h>

typedef int DataType;

//template<typename DataType>
class UList
{
public:
	class UListNode
	{
		friend UList;
		friend class iterator;

	private:
		UListNode* Prev = nullptr;
		UListNode* Next = nullptr;
		DataType Data; // 저장될 데이터

		void Release()
		{
			if (nullptr != Next)
			{
				Next->Release();
			}
			// 결국 Next를 타고가다 nullptr에 도달하는 순간까지
			// 재귀함수가 계속 호출되며 스택에 Release 함수가 계속 쌓이다
			// nullptr를 만나는 그 순간 이제껏 호출된 함수의 역순으로
			// delete가 진행되다 결국 Next까지 delete가 되며 끝난다.
			delete this;
		}
	};

	class iterator
	{
		friend UList;
	public:
		iterator()
		{
		}

		bool operator!=(const iterator& _Other)
		{
			return this->CurNode != _Other.CurNode;
		}

		DataType& operator*()
		{
			return CurNode->Data;
		}

		iterator& operator++()
		{
			CurNode = CurNode->Next;
			return *this;
		}

		DataType& GetValue()
		{
			return CurNode->Data;
		}

	private:
		iterator(UListNode* _Node)
			:CurNode(_Node)
		{
		}

		UListNode* CurNode = nullptr;
	};

public:
	// UList
	UList()
	{
		StartNode = new UListNode();
		EndNode   = new UListNode();
		StartNode->Next = EndNode;
		EndNode->  Prev = StartNode;

		// StartNode와 EndNode 확인의 편의를 위해
		// 쓰레기값 대신 -1을 넣어 일단 확인한다.
		StartNode->Data = -1;
		EndNode->  Data = -1;
	}

	~UList()
	{
		StartNode->Release();
	}

	// class UList
	void push_front(const DataType& _Data)
	{
		UListNode* ListNode = new UListNode();
		ListNode->Data = _Data;

		ListNode->Prev = StartNode;
		ListNode->Next = StartNode->Next;

		StartNode->Next->Prev = ListNode;
		StartNode->Next = ListNode;
	}


	void push_back(const DataType& _Data)
	{
		UListNode* ListNode = new UListNode();
		ListNode->Data = _Data;

		ListNode->Next = EndNode;
		ListNode->Prev = EndNode->Prev;

		EndNode->Prev->Next = ListNode;
		EndNode->Prev = ListNode;
	}

	void clear()
	{
		// 시작 노드의 다음 첫번째 노드부터
		UListNode* CurNode = StartNode->Next;

		// End 노드 전까지
		while (CurNode != EndNode)
		{
			// 삭제 이전 다음 노드 주소를 미리 받아둔다.
			UListNode* NextNode = CurNode->Next;

			delete CurNode;
			CurNode = nullptr;

			// 다음 노드를 다시 받아 조건식으로 이동한다.
			CurNode = NextNode;
		}
	}

	// class UList 
	iterator erase(iterator& _Data)
	{
		UListNode* CurNode = _Data.CurNode;

		if (nullptr == CurNode)
		{
			MSGASSERT("잘못된 데이터를 입력");
			return iterator();
		}

		if (CurNode == StartNode)
		{
			MSGASSERT("시작 노드(Head)는 삭제 불가");
			return iterator();
		}

		if (CurNode == EndNode)
		{
			MSGASSERT("마지막 노드(tail)는 삭제 불가");
			return iterator(); 
		}

		// 삭제하기 전 리턴 값을 저장할 변수
		UListNode* ReturnNode = CurNode->Next;

		// 자신의 이전 노드에게 다음 노드의 주소를 넘겨주고
		CurNode->Prev->Next = CurNode->Next;
		// 자신의 다음 노드에게 이전 노드 주소를 넘겨준다.
		CurNode->Next->Prev = CurNode->Prev;

		delete CurNode;
		CurNode = nullptr;

		return iterator(ReturnNode);
	}

	iterator begin()
	{
		return iterator(StartNode->Next);
	}

	iterator end()
	{
		return iterator(EndNode);
	}

private:
	UListNode* StartNode = nullptr;
	UListNode* EndNode   = nullptr;
};

