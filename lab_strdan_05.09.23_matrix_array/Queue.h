#pragma once
#include <iostream>
#include <vector>
#include <string>

template<typename datatype>
struct QNode {
	datatype data;
	QNode* next;
	QNode(datatype value)
	{
		data = value;
		next = nullptr;
	}
};

template<typename datatype>
class Queue
{
	QNode<datatype>* head;
	QNode<datatype>* tail;
public:
	Queue();
	Queue(const std::vector<datatype>& vec);
	~Queue();
	void push(datatype value);
	void pop();
	datatype peek();
	bool isEmpty();
	void clear();
	void print();
};
template<typename datatype>
Queue<datatype>::Queue() : head(nullptr), tail(nullptr)
{

}
template<typename datatype>
Queue<datatype>::Queue(const std::vector<datatype>& vec) : head(nullptr), tail(nullptr)
{
	for (size_t i = 0; i < vec.size(); ++i)
	{
		push(vec[i]);
	}
}
template<typename datatype>
Queue<datatype>::~Queue()
{
	clear();
	head = nullptr;
	tail = nullptr;
}
template<typename datatype>
void Queue<datatype>::push(datatype value)
{
	QNode<datatype>* ptr = new QNode<datatype>(value);
	if (tail != nullptr)
	{
		tail->next = ptr;
	}
	if (head == nullptr)
	{
		head = ptr;
	}
	tail = ptr;
}
template<typename datatype>
void Queue<datatype>::pop()
{
	if (head != nullptr)
	{
		QNode<datatype>* ptr = head;
		head = head->next;
		if (head == nullptr)
		{
			tail = nullptr;
		}
		ptr->next = nullptr;
		delete ptr;
		ptr = nullptr;
	}

}
template<typename datatype>
datatype Queue<datatype>::peek()
{
	return head->data;
}
template<typename datatype>
bool Queue<datatype>::isEmpty()
{
	return !(head);
}
template<typename datatype>
void Queue<datatype>::clear()
{
	while (!isEmpty())
	{
		pop();
	}
}
template<typename datatype>
void Queue<datatype>::print()
{
	if (head == nullptr)
	{
		std::cout << "nullptr" << '\n';
	}
	else
	{
		QNode<datatype>* current = head;
		while (current != nullptr)
		{
			std::cout << current->data << '\t';
			current = current->next;
		}
		std::cout << '\n';
	}
}
