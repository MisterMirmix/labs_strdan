#pragma once
#include <iostream>
#include <vector>
#include <string>

template<typename datatype>
struct SNode {
	datatype data;
	SNode* next;
	SNode(datatype value)
	{
		data = value;
		next = nullptr;
	}
};

template<typename datatype>
class StackList
{
	SNode<datatype>* head;
public:
	StackList();
	StackList(const std::vector<datatype>& vec);
	~StackList();
	void push(datatype value);
	void pop();
	datatype peek();
	bool isEmpty();
	void clear();
	void print();
};
template<typename datatype>
StackList<datatype>::StackList() : head(nullptr)
{

}
template<typename datatype>
StackList<datatype>::StackList(const std::vector<datatype>& vec) : head(nullptr)
{
	for (size_t i = 0; i < vec.size(); ++i)
	{
		push(vec[i]);
	}
}
template<typename datatype>
StackList<datatype>::~StackList()
{
	clear();
	head = nullptr;
}
template<typename datatype>
void StackList<datatype>::push(datatype value)
{
	SNode<datatype>* ptr = new SNode<datatype>(value);
	ptr->next = head;
	head = ptr;
}
template<typename datatype>
void StackList<datatype>::pop()
{
	if (head != nullptr)
	{
		SNode<datatype>* ptr = head;
		head = head->next;
		ptr->next = nullptr;
		delete ptr;
		ptr = nullptr;
	}

}
template<typename datatype>
datatype StackList<datatype>::peek()
{
	return head->data;
}
template<typename datatype>
bool StackList<datatype>::isEmpty()
{
	return (head == nullptr);
}
template<typename datatype>
void StackList<datatype>::clear()
{
	while (!isEmpty())
	{
		pop();
	}
}
template<typename datatype>
void StackList<datatype>::print()
{
	if (head == nullptr)
	{
		std::cout << "nullptr" << '\n';
	}
	else
	{
		SNode<datatype>* current = head;
		while (current != nullptr)
		{
			std::cout << current->data << '\t';
			current = current->next;
		}
		std::cout << '\n';
	}
}