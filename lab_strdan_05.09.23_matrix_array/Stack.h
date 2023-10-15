#pragma once
#include <iostream>

class Stack
{
	int* stack;
	int size;
	int top;
	void resize();
public:
	Stack();
	Stack(int _size);
	~Stack();
	int getSize();
	void push(int elem);
	void pop();
	int peek();
	bool isEmpty();
	void clear();
	void print();
};

