#pragma once
#include <iostream>
#include <ctime>

template<typename datatype>
struct Node
{
	datatype value = 0;
	Node<datatype>* next = nullptr;
};

template<typename datatype> void addToHead(Node<datatype>* &head, datatype value);
template<typename datatype> void addAfterNode(Node<datatype>* &node, datatype value);
template<typename datatype> void print(Node<datatype>* head);
template<typename datatype> Node<datatype>* searchValue(Node<datatype>* head, datatype value);
template<typename datatype> void deleteHead(Node<datatype>* &head);
template<typename datatype> void deleteAfterNode(Node<datatype>* &node);
template<typename datatype> void deleteAllNegative(Node<datatype>*& head);
template<typename datatype> Node<datatype>* genRandList(datatype value);

template<typename datatype>
void addToHead(Node<datatype>*& head, datatype value)
{
	Node<datatype>* newHead = new Node;
	newHead->value = value;
	newHead->next = head;
	head = newHead;
}
template<typename datatype>
void addAfterNode(Node<datatype>*& node, datatype value)
{
	Node<datatype>* newNode = new Node;
	newNode->next = node->next;
	newNode->value = value;
	node->next = newNode;
}
template<typename datatype>
bool isEmpty(Node<datatype>* head)
{
	return (!head);
}
template<typename datatype>
void print(Node<datatype>* head)
{
	if (isEmpty(head))
	{
		std::cout << "nullptr\n";
	}
	else
	{
		Node<datatype>* current = head;
		while (current != nullptr)
		{
			std::cout << current->value << '\t';
			current = current->next;
		}
		std::cout << '\n';
	}
}
template<typename datatype>
Node<datatype>* searchValue(Node<datatype>* head, datatype value)
{
	Node<datatype>* current = head;
	Node<datatype>* result = nullptr;
	while (current->next != nullptr && result == nullptr)
	{
		if (current->value == value)
		{
			result = current;
		}
		current = current->next;
	}
	return result;
}
template<typename datatype>
void deleteHead(Node<datatype>*& head)
{
	Node<datatype>* ptr = head;
	head = head->next;
	ptr->next = nullptr;
	delete ptr;
	ptr = nullptr;
}
template<typename datatype>
void deleteAfterNode(Node<datatype>*& node)
{
	Node<datatype>* ptr = node->next;
	node->next = ptr->next;
	ptr->next = nullptr;
	delete ptr;
	ptr = nullptr;
}
template<typename datatype>
void deleteAllNegative(Node<datatype>*& head)
{
	while (!isEmpty(head) && head->value < 0)
	{
		deleteHead(head);
	}
	Node<datatype>* current = head;
	while (current->next)
	{
		if (current->next->value < 0)
		{
			deleteAfterNode(current);
		}
		else
		{
			current = current->next;
		}
	}
}
template<typename datatype>
Node<datatype>* genRandList(datatype value)
{
	Node<datatype>* head = new Node<datatype>;
	head->value = (rand() % 11 - rand() % 11) * (rand() % 11);
	for (int i = 1; i < value; i++)
	{
		addToHead(head, (rand() % 11 - rand() % 11) * (rand() % 11));
	}
	return head;
}



