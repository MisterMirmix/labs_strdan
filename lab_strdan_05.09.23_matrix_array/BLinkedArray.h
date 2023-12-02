#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

// |||.1 сортировка по году и удаление книг раньше указанной даты
template<typename datatype>
struct BNode {
	datatype value;
	BNode<datatype>* next;
	BNode<datatype>* prev;
	BNode(datatype newValue)
	{
		next = nullptr;
		prev = nullptr;
		value = newValue;
	}
};

template<typename datatype>
class BList
{
	BNode<datatype>* head;
	BNode<datatype>* end;
	void clear();
public:
	BList();
	~BList();
	void addToHead(datatype value);
	void deleteFromHead();
	void addToEnd(datatype value);
	void deleteFromEnd();
	//datatype GetValueOfBNode(BNode<datatype>* ptr);
	BNode<datatype>* getEnd();
	BNode<datatype>* getHead();
	void addAfterBNode(BNode<datatype>* p, datatype value);
	void addBeforeBNode(BNode<datatype>* n, datatype value);
	void deleteAfterBNode(BNode<datatype>* p);
	void deleteBeforeBNode(BNode<datatype>* n);
	void print();
	bool isEmpty();
	////
	void swapBNode(BNode<datatype>* p1, BNode<datatype>* p2);
	void sortByCondition(bool(*condition)(BNode<datatype>* p1, BNode<datatype>* p2));
};


template<typename datatype>
void BList<datatype>::clear()
{
	while (!isEmpty())
	{
		deleteFromHead();
	}
}

template <typename datatype>
BList<datatype>::BList() : head(nullptr), end(nullptr)
{
}

template <typename datatype>
BList<datatype>::~BList()
{
	clear();
	head = nullptr;
	end = nullptr;
}

template <typename datatype>
void BList<datatype>::addToHead(datatype value)
{
	BNode<datatype>* ptr = new BNode<datatype>(value);
	ptr->next = head;
	if (head != nullptr)
	{
		head->prev = ptr;
	}
	if (end == nullptr)
	{
		end = ptr;
	}
	head = ptr;
}

template <typename datatype>
void BList<datatype>::deleteFromHead()
{
	if (head != nullptr)
	{
		BNode<datatype>* ptr = head;
		head = ptr->next;
		if (ptr->next != nullptr)
		{
			ptr->next->prev = nullptr;
		}
		else
		{
			end = nullptr;
		}
		ptr->next = nullptr;
		ptr->prev = nullptr;
		delete ptr;
		ptr = nullptr;
	}
}

template <typename datatype>
void BList<datatype>::addToEnd(datatype value)
{
	BNode<datatype>* ptr = new BNode<datatype>(value);
	ptr->prev = end;
	if (end != nullptr)
	{
		end->next = ptr;
	}
	if (head == nullptr)
	{
		head = ptr;
	}
	end = ptr;
}

template <typename datatype>
void BList<datatype>::deleteFromEnd()
{
	if (end != nullptr)
	{
		BNode<datatype>* ptr = end;
		end = ptr->prev;
		if (ptr->prev != nullptr)
		{
			ptr->prev->next = nullptr;
		}
		else
		{
			head = nullptr;
		}
		ptr->next = nullptr;
		ptr->prev = nullptr;
		delete ptr;
		ptr = nullptr;
	}
}

template <typename datatype>
BNode<datatype>* BList<datatype>::getEnd()
{
	return end;
}

template <typename datatype>
BNode<datatype>* BList<datatype>::getHead()
{
	return head;
}

template <typename datatype>
void BList<datatype>::addAfterBNode(BNode<datatype>* pBNode, datatype value)
{
	BNode<datatype>* p = new BNode<datatype>(value);

	if (pBNode != end)
	{
		p->next = pBNode->next;
		pBNode->next->prev = p;
	}
	else
	{
		end = p;
	}
	pBNode->next = p;
	p->prev = pBNode;
}

template <typename datatype>
void BList<datatype>::addBeforeBNode(BNode<datatype>* nBNode, datatype value)
{
	BNode<datatype>* p = new BNode<datatype>(value);

	if (nBNode != head)
	{
		p->prev = nBNode->prev;
		nBNode->prev->next = p;
	}
	else
	{
		head = p;
	}
	nBNode->prev = p;
	p->next = nBNode;

}

template <typename datatype>
void BList<datatype>::deleteAfterBNode(BNode<datatype>* pBNode)
{
	if (pBNode != end)
	{
		BNode<datatype>* p = pBNode->next;
		pBNode->next = p->next;
		if (p != end)
		{
			p->next->prev = pBNode;
		}
		else
		{
			end = pBNode;
		}
		p->next = nullptr;
		p->prev = nullptr;
		delete p;
		p = nullptr;
	}
}

template <typename datatype>
void BList<datatype>::deleteBeforeBNode(BNode<datatype>* nBNode)
{
	if (nBNode != head)
	{
		BNode<datatype>* p = nBNode->prev;
		nBNode->prev = p->prev;
		if (p != head)
		{
			p->prev->next = nBNode;
		}
		else
		{
			head = nBNode;
		}
		p->next = nullptr;
		p->prev = nullptr;
		delete p;
		p = nullptr;
	}
}

template <typename datatype>
void BList<datatype>::print()
{
	if (head == nullptr)
	{
		std::cout << "nullptr" << '\n';
	}
	else
	{
		BNode<datatype>* current = head;
		while (current != nullptr)
		{
			std::cout << current->value << '\t';
			current = current->next;
		}
		std::cout << '\n';
	}
}

template <typename datatype>
bool BList<datatype>::isEmpty()
{
	return !(head);
}

template<typename datatype>
void BList<datatype>::swapBNode(BNode<datatype>* p1, BNode<datatype>* p2)
{
	datatype np = p1->value;
	p1->value = p2->value;
	p2->value = np;
}

template<typename datatype>
void BList<datatype>::sortByCondition(bool(*condition)(BNode<datatype>* p1, BNode<datatype>* p2))
{
	if (!isEmpty() && head->next != nullptr)
	{
		for (BNode<datatype>* i = head; i->next != nullptr; i = i->next)
		{
			for (BNode<datatype>* j = i->next; j != nullptr; j = j->next)
			{
				if (!condition(i, j)) 
				{
					swapBNode(i, j);
				}
			}
		}
	}
}



