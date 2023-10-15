#include "Stack.h"

void Stack::resize()
{
	size *= 2;
	int* a = new int[size];
	for (int i = 0; i <= top; ++i)
	{
		a[i] = stack[i];
	}
	delete[] stack;
	stack = a;
	a = nullptr;

}

Stack::Stack() : size(10), top(-1), stack(new int[10])
{
}

Stack::Stack(int _size) : size(_size), top(-1), stack(new int[_size])
{
}

Stack::~Stack()
{
	delete[] stack;
	stack = nullptr;
}

int Stack::getSize()
{
	return size;
}

void Stack::push(int elem)
{
	if (top + 1 == size) {
		resize();
	}
	++top;
	stack[top] = elem;
}

void Stack::pop()
{
	if (top != -1)
	{
		--top;
	}
}

int Stack::peek()
{
	return stack[top];
}

bool Stack::isEmpty()
{
	return (top == -1);
}

void Stack::clear()
{
	top = -1;
}

void Stack::print()
{
	int a = top;
	while (a > -1)
	{
		std::cout << stack[a] << '\t';
		--a;
	}
}
