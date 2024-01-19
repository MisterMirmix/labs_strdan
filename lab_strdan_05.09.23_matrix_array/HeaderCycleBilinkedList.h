#pragma once
#include <iostream>
struct HBCNode
{
	int data;
	HBCNode* prev;
	HBCNode* next;
	HBCNode() : data(0), prev(nullptr), next(nullptr) {}
	HBCNode(int value) : data(value), prev(nullptr), next(nullptr) {}
};

void init(HBCNode*& head)
{
	head = new HBCNode;
	head->next = head;
	head->prev = head;
}

bool isEmpty(HBCNode* head)
{
	return head->next == head;
}

void addAfterNode(/*HBCNode*& head, */HBCNode* ptr, int value)
{
	HBCNode* newptr = new HBCNode(value);
	newptr->prev = ptr;
	newptr->next = ptr->next;
	ptr->next->prev = newptr;
	ptr->next = newptr;
	
}

void addBeforeNode(/*HBCNode*& head, */HBCNode* ptr, int value)
{
	HBCNode* newptr = new HBCNode(value);
	newptr->next = ptr;
	newptr->prev = ptr->prev;
	ptr->prev->next = newptr;
	ptr->prev = newptr;
}

void deleteBeforeNode(HBCNode* head, HBCNode* ptr)
{
	if (!isEmpty(head))
	{
		HBCNode* current = ptr->prev;
		if (current == head)
		{
			current = current->prev;
		}
		current->prev->next = current->next;
		current->next->prev = current->prev;

		current->next = nullptr;
		current->prev = nullptr;
		delete current;
		current = nullptr;
	}
}

void deleteAfterNode(HBCNode* head, HBCNode* ptr)
{
	if (!isEmpty(head))
	{
		HBCNode* current = ptr->next;
		if (current == head)
		{
			current = current->next;
		}
		current->prev->next = current->next;
		current->next->prev = current->prev;

		current->next = nullptr;
		current->prev = nullptr;
		delete current;
		current = nullptr;
	}
}

void deleteCurrentNode(HBCNode*& head, HBCNode* ptr)
{
	if (!isEmpty(head) && ptr != head)
	{
		HBCNode* current = ptr;
		current->prev->next = current->next;
		current->next->prev = current->prev;

		current->next = nullptr;
		current->prev = nullptr;
		delete current;
		current = nullptr;
	}
}

void print(HBCNode* head)
{
	std::cout << head->data;
	HBCNode* current = head->next;
	while (current != head)
	{
		std::cout << '\t' << current->data;
		current = current->next;
	}
}

//void print(HBCNode* head)
//{
//	
//	HBCNode* current = head->next;
//	while (current != head)
//	{
//		std::cout << '\t' << current->data;
//		current = current->next;
//	}
//	std::cout << head->data;
//}