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
		DataType Data; // ����� ������

		void Release()
		{
			if (nullptr != Next)
			{
				Next->Release();
			}
			// �ᱹ Next�� Ÿ���� nullptr�� �����ϴ� ��������
			// ����Լ��� ��� ȣ��Ǹ� ���ÿ� Release �Լ��� ��� ���̴�
			// nullptr�� ������ �� ���� ������ ȣ��� �Լ��� ��������
			// delete�� ����Ǵ� �ᱹ Next���� delete�� �Ǹ� ������.
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

		// StartNode�� EndNode Ȯ���� ���Ǹ� ����
		// �����Ⱚ ��� -1�� �־� �ϴ� Ȯ���Ѵ�.
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
		// ���� ����� ���� ù��° ������
		UListNode* CurNode = StartNode->Next;

		// End ��� ������
		while (CurNode != EndNode)
		{
			// ���� ���� ���� ��� �ּҸ� �̸� �޾Ƶд�.
			UListNode* NextNode = CurNode->Next;

			delete CurNode;
			CurNode = nullptr;

			// ���� ��带 �ٽ� �޾� ���ǽ����� �̵��Ѵ�.
			CurNode = NextNode;
		}
	}

	// class UList 
	iterator erase(iterator& _Data)
	{
		UListNode* CurNode = _Data.CurNode;

		if (nullptr == CurNode)
		{
			MSGASSERT("�߸��� �����͸� �Է�");
			return iterator();
		}

		if (CurNode == StartNode)
		{
			MSGASSERT("���� ���(Head)�� ���� �Ұ�");
			return iterator();
		}

		if (CurNode == EndNode)
		{
			MSGASSERT("������ ���(tail)�� ���� �Ұ�");
			return iterator(); 
		}

		// �����ϱ� �� ���� ���� ������ ����
		UListNode* ReturnNode = CurNode->Next;

		// �ڽ��� ���� ��忡�� ���� ����� �ּҸ� �Ѱ��ְ�
		CurNode->Prev->Next = CurNode->Next;
		// �ڽ��� ���� ��忡�� ���� ��� �ּҸ� �Ѱ��ش�.
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

