#pragma once
#include <iostream>
#include <vector>
#include <string>
struct QNode {
	int data;
	QNode* next;
	QNode(int value)
	{
		data = value;
		next = nullptr;
	}
};
class Queue
{
	QNode* head;
	QNode* tail;
public:
	Queue();
	Queue(const std::vector<int>& vec);
	~Queue();
	void push(int value);
	void pop();
	int peek();
	bool isEmpty();
	void clear();
	void print();
};

