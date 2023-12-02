#pragma once
#include <iostream>
#include <windows.h>

class Stack
{
	int* stack;
	int size;
	int top;
	void resize();
public:
	Stack();
	Stack(int _size);
	/*Stack(const Stack& other);*/
	~Stack();
	int getSize();
	void push(int elem);
	void pop();
	int peek();
	bool isEmpty();
	/*Stack& operator= (const Stack& other);*/
	void clear();
	void print();
	void colorPrint();
};

int popRaws(Stack& stack);
void test();