#pragma once
#include <iostream>

template<typename datatype>
struct HNode
{
	datatype value;
	HNode<datatype>* next;
	HNode() : value(0), next(nullptr) {}
	HNode(datatype v) : value(v), next(nullptr) {}
};
template<typename datatype>
void init(HNode<datatype>*& head)
{
	head = new HNode<datatype>;
}

template<typename datatype>
void deleteAfterNode(HNode<datatype>*& ptr)
{
	if (ptr->next != nullptr)
	{
		HNode<datatype>* newptr = ptr->next;
		ptr->next = ptr->next->next;
		delete newptr;
		newptr = nullptr;
	}
}
template<typename datatype>
void addAfterNode(HNode<datatype>* ptr, datatype value)
{
	HNode<datatype>* newptr = new HNode<datatype>(value);
	newptr->next = ptr->next;
	ptr->next = newptr;
}
template<typename datatype>
void print(HNode<datatype>* head)
{
	std::cout << head->value;
	HNode<datatype>* current = head->next;
	while (current != nullptr)
	{
		std::cout << '\t' << current->value;
		current = current->next;
	}
}
template<typename datatype>
void clear(HNode<datatype>* head)
{
	while (head->next != nullptr)
	{
		deleteAfterNode(head);
	}
}
template<typename datatype>
bool IsEmpty(HNode<datatype>* head)
{
	return (head->next == nullptr);
}

