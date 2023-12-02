#include "BLinkedArray.h"

//template <typename datatype>
//void BList::clear()
//{

//}

//template<typename datatype>
//void BList<datatype>::clear()
//{
//	while (!isEmpty())
//	{
//		deleteFromHead();
//	}
//}
//
//template <typename datatype>
//BList<datatype>::BList() : head(nullptr), end(nullptr)
//{
//	/*head = nullptr;
//	end = nullptr;*/
//}
//
//template <typename datatype>
//BList<datatype>::~BList()
//{
//	clear();
//	head = nullptr;
//	end = nullptr;
//}
//
//template <typename datatype>
//void BList<datatype>::addToHead(datatype value)
//{
//	BNode<datatype>* ptr = new BNode<datatype>(value);
//	ptr->next = head;
//	if (head != nullptr)
//	{
//		head->prev = ptr;
//	}
//	if (end == nullptr)
//	{
//		end = ptr;
//	}
//	head = ptr;
//}
//
//template <typename datatype>
//void BList<datatype>::deleteFromHead()
//{
//	if (head != nullptr)
//	{
//		BNode<datatype>* ptr = head;
//		head = ptr->next;
//		if (ptr->next != nullptr)
//		{
//			ptr->next->prev = nullptr;
//		}
//		else
//		{
//			end = nullptr;
//		}
//		ptr->next = nullptr;
//		ptr->prev = nullptr;
//		delete ptr;
//		ptr = nullptr;
//	}
//}
//
//template <typename datatype>
//void BList<datatype>::addToEnd(datatype value)
//{
//	BNode<datatype>* ptr = new BNode<datatype>(value);
//	ptr->prev = end;
//	if (end != nullptr)
//	{
//		end->next = ptr;
//	}	
//	if (head == nullptr)
//	{
//		head = ptr;
//	}	
//	end = ptr;
//}
//
//template <typename datatype>
//void BList<datatype>::deleteFromEnd()
//{
//	if (end != nullptr)
//	{
//		BNode<datatype>* ptr = end;
//		end = ptr->prev;
//		if (ptr->prev != nullptr)
//		{
//			ptr->prev->next = nullptr;
//		}
//		else
//		{
//			head = nullptr;
//		}
//		ptr->next = nullptr;
//		ptr->prev = nullptr;
//		delete ptr;
//		ptr = nullptr;
//	}
//}
//
//template <typename datatype>
//BNode<datatype>* BList<datatype>::getEnd()
//{
//	return end;
//}
//
//template <typename datatype>
//BNode<datatype>* BList<datatype>::getHead()
//{
//	return head;
//}
//
//template <typename datatype>
//void BList<datatype>::addAfterBNode(BNode<datatype>* pBNode, datatype value)
//{
//	BNode<datatype>* p = new BNode<datatype>(value);
//
//	if (pBNode != end)
//	{
//		p->next = pBNode->next;
//		pBNode->next->prev = p;
//	}
//	else
//	{
//		end = p;
//	}
//	pBNode->next = p;
//	p->prev = pBNode;
//}
//
//template <typename datatype>
//void BList<datatype>::addBeforeBNode(BNode<datatype>* nBNode, datatype value)
//{
//	BNode<datatype>* p = new BNode<datatype>(value);
//
//	if (nBNode != head)
//	{
//		p->prev = nBNode->prev;
//		nBNode->prev->next = p;
//	}
//	else
//	{
//		head = p;
//	}
//	nBNode->prev = p;
//	p->next = nBNode;
//
//}
//
//template <typename datatype>
//void BList<datatype>::deleteAfterBNode(BNode<datatype>* pBNode)
//{
//	if (pBNode != end)
//	{
//		BNode<datatype>* p = pBNode->next;
//		pBNode->next = p->next;
//		if (p != end)
//		{
//			p->next->prev = pBNode;
//		}
//		else
//		{
//			end = pBNode;
//		}
//		p->next = nullptr;
//		p->prev = nullptr;
//		delete p;
//		p = nullptr;
//	}
//}
//
//template <typename datatype>
//void BList<datatype>::deleteBeforeBNode(BNode<datatype>* nBNode)
//{
//	if (nBNode != head)
//	{
//		BNode<datatype>* p = nBNode->prev;
//		nBNode->prev = p->prev;
//		if (p != head)
//		{
//			p->prev->next = nBNode;
//		}
//		else
//		{
//			head = nBNode;
//		}
//		p->next = nullptr;
//		p->prev = nullptr;
//		delete p;
//		p = nullptr;
//	}
//}
//
//template <typename datatype>
//void BList<datatype>::print()
//{
//	if (head == nullptr)
//	{
//		std::cout << "nullptr" << '\n';
//	}
//	else
//	{
//		BNode<datatype>* current = head;
//		while (current != nullptr)
//		{
//			std::cout << current->value << '\t';
//			current = current->next;
//		}
//		std::cout << '\n';
//	}
//}
//
//template <typename datatype>
//bool BList<datatype>::isEmpty()
//{
//	return !(head);
//}


