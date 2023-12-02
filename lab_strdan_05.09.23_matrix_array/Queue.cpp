#include "Queue.h"

Queue::Queue() : head(nullptr), tail(nullptr)
{

}

Queue::Queue(const std::vector<int>& vec) : head(nullptr), tail(nullptr)
{
	for (size_t i = 0; i < vec.size(); ++i)
	{
		push(vec[i]);
	}
}

Queue::~Queue()
{
	clear();
	head = nullptr;
	tail = nullptr;
}

void Queue::push(int value)
{
	QNode* ptr = new QNode(value);
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

void Queue::pop()
{
	if (head != nullptr)
	{
		QNode* ptr = head;
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

int Queue::peek()
{
	return head->data;
}

bool Queue::isEmpty()
{
	return !(head);
}

void Queue::clear()
{
	while (!isEmpty())
	{
		pop();
	}
}

void Queue::print()
{
	if (head == nullptr)
	{
		std::cout << "nullptr" << '\n';
	}
	else
	{
		QNode* current = head;
		while (current != nullptr)
		{
			std::cout << current->data << '\t';
			current = current->next;
		}
		std::cout << '\n';
	}
}
