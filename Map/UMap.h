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
	// UMap�� 2���� innerClass�� ������.
	// UMapNode�� iterator
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
			// ���� key���� �ߺ��� key���� �ִ´ٸ�
			if (Pair.first == _Pair.first)
			{
				return;
			}

			// LeftChild�� ��ġ
			//    10       >   2
			if (Pair.first > _Pair.first)
			{
				// LeftChild�� ���ٸ�
				if (nullptr == LeftChild)
				{
					LeftChild = new UMapNode();
					LeftChild->Parent = this;
					LeftChild->Pair = _Pair;
					return;
				}
				// LeftChild�� �ִٸ� ���
				// ��͸� �ϸ� this�� LeftChild�� this�� �ȴ�.
				LeftChild->insertNode(_Pair);
			}
			else // RightChild�� ��ġ
			{
				if (nullptr == RightChild)
				{
					RightChild = new UMapNode();
					RightChild->Parent = this;
					RightChild->Pair = _Pair;
					return;
				}

				// RightChild�� �ִٸ� ���
				RightChild->insertNode(_Pair);
			}
		}
	};
	

public:
	UMapNode* Root = nullptr;

	void insert(const UPair& _Pair)
	{
		// Root�� ���ٸ�
		if (nullptr == Root)
		{
			Root = new UMapNode(); // ��ü �����ϰ�
			Root->Pair = _Pair; // first, second ���� �����Ѵ�.
			return;
		}
		// Root�� �����ϸ�
		Root->insertNode(_Pair);
	}
	
};

