#include "SingleLinkedArray.h"
/*
* сгенерировать список сост из 20 элем от -100 до 100 и удалить все отриц элементы0
*/

void addToHead(Node*& head, int value)
{
	Node* newHead = new Node;
	newHead->value = value;
	newHead->next = head;
	head = newHead;
}

void addAfterNode(Node* &node, int value)
{
	Node* newNode = new Node;
	newNode->next = node->next;
	newNode->value = value;
	node->next = newNode;
}

bool isEmpty(Node* head)
{
	return (!head);
}

void Print(Node* head)
{
	if (isEmpty(head))
	{
		std::cout << "nullptr\n";
	}
	else
	{
		Node* current = head;
		while (current != nullptr)
		{
			std::cout << current->value << '\t';
			current = current->next;
		}
		std::cout << '\n';
	}
}

Node* searchValue(Node* head, int value)
{
	Node* current = head;
	Node* result = nullptr;
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

void deleteHead(Node*& head)
{
	Node* ptr = head;
	head = head->next;
	ptr->next = nullptr;
	delete ptr;
	ptr = nullptr;
}

void deleteAfterNode(Node* &node)
{
	Node* ptr = node->next;
	node->next = ptr->next;
	ptr->next = nullptr;
	delete ptr;
	ptr = nullptr;
}

void deleteAllNegative(Node*& head)
{
	while (!isEmpty(head) && head->value < 0)
	{
		deleteHead(head);
	}
	Node* current = head;
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

Node* genRandList(int value)
{
	Node* head = new Node;
	head->value = (rand() % 11 - rand() % 11) * (rand() % 11);
	for (int i = 1; i < value; i++)
	{
		addToHead(head, (rand() % 11 - rand() % 11) * (rand() % 11));
	}
	return head;
}

