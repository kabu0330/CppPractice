#pragma once

typedef int KeyType;
typedef int ValueType;

class UPair
{
public:
	UPair(KeyType _first, ValueType _second)
		: first(_first), second(_second)
	{

	}

	KeyType   first;
	ValueType second;
};

UPair Umake_pair(const KeyType& first, const ValueType& second);

//template<typename KeyType, typename ValueType>
class UMap
{
	// UMap은 2개의 innerClass를 가진다.
	// UMapNode와 iterator
public:
	class UMapNode
	{
	public:
		UMapNode* Parent = nullptr;
		UMapNode* LeftChild = nullptr;
		UMapNode* RightChild = nullptr;
		UPair Pair;

		void insertNode(const UPair& _Pair)
		{
			// 기존 key값과 중복된 key값을 넣는다면
			if (Pair.first == _Pair.first)
			{
				return;
			}

			// LeftChild에 배치
			//    10       >   2
			if (Pair.first > _Pair.first)
			{
				// LeftChild가 없다면
				if (nullptr == LeftChild)
				{
					LeftChild = new UMapNode();
					LeftChild->Parent = this;
					LeftChild->Pair = _Pair;
					return;
				}
				// LeftChild가 있다면 재귀
				// 재귀를 하면 this가 LeftChild의 this가 된다.
				LeftChild->insertNode(_Pair);
			}
			else // RightChild에 배치
			{
				if (nullptr == RightChild)
				{
					RightChild = new UMapNode();
					RightChild->Parent = this;
					RightChild->Pair = _Pair;
					return;
				}

				// RightChild가 있다면 재귀
				RightChild->insertNode(_Pair);
			}
		}
	};
	

public:
	UMapNode* Root = nullptr;

	void insert(const UPair& _Pair)
	{
		// Root가 없다면
		if (nullptr == Root)
		{
			Root = new UMapNode(); // 객체 생성하고
			Root->Pair = _Pair; // first, second 값을 저장한다.
			return;
		}
		// Root가 존재하면
		Root->insertNode(_Pair);
	}
	
};

