#pragma once
#include <iostream>
#include <windows.h>


template<typename datatype>
class Stack
{
	datatype* stack;
	int size;
	int top;
	void resize();
public:
	Stack();
	Stack(int _size);
	/*Stack(const Stack& other);*/
	~Stack();
	int getSize();
	void push(datatype elem);
	void pop();
	datatype peek();
	bool isEmpty();
	/*Stack& operator= (const Stack& other);*/
	void clear();
	void print();
	void colorPrint();
};
template<typename datatype>
int popRaws(Stack<datatype>& stack);
//void test();


template<typename datatype>
void Stack<datatype>::resize()
{
	size *= 2;
	datatype* a = new datatype[size];
	for (int i = 0; i <= top; ++i)
	{
		a[i] = stack[i];
	}
	delete[] stack;
	stack = a;
	a = nullptr;

}
template<typename datatype>
Stack<datatype>::Stack() : size(10), top(-1), stack(new datatype[10])
{
}
template<typename datatype>
Stack<datatype>::Stack(int _size) : size(_size), top(-1), stack(new datatype[_size])
{
}

//Stack::Stack(const Stack& other)
//{
//	/*delete[] stack;*/
//	size = other.size;
//	stack = new int[size];
//	top = other.top;
//	for (int i = 0; i <= top; ++i)
//	{
//		stack[i] = other.stack[i];
//	}
//}
template<typename datatype>
Stack<datatype>::~Stack()
{
	delete[] stack;
	stack = nullptr;
}
template<typename datatype>
int Stack<datatype>::getSize()
{
	return size;
}
template<typename datatype>
void Stack<datatype>::push(datatype elem)
{
	if (top + 1 == size) {
		resize();
	}
	++top;
	stack[top] = elem;
}
template<typename datatype>
void Stack<datatype>::pop()
{
	if (top != -1)
	{
		--top;
	}
}
template<typename datatype>
datatype Stack<datatype>::peek()
{
	return stack[top];
}
template<typename datatype>
bool Stack<datatype>::isEmpty()
{
	return (top == -1);
}

//Stack& Stack::operator=(const Stack& other)
//{
//	delete[] stack;
//	size = other.size;
//	stack = new int[size];
//	top = other.top;
//	for (int i = 0; i <= top; ++i)
//	{
//		stack[i] = other.stack[i];
//	}
//	return *this;
//}
template<typename datatype>
void Stack<datatype>::clear()
{
	top = -1;
}
template<typename datatype>
void Stack<datatype>::print()
{
	int a = top;
	while (a > -1)
	{
		std::cout << stack[a] << '\t';
		--a;
	}
	std::cout << '\n';
}
template<typename datatype>
void Stack<datatype>::colorPrint()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int a = top;
	while (a > -1)
	{
		SetConsoleTextAttribute(hConsole, stack[a]);
		std::cout << stack[a] << '\t';
		--a;
	}
	SetConsoleTextAttribute(hConsole, 7);
	std::cout << '\n';
}
template<typename datatype>
int popRaws(Stack<datatype>& stack)
{
	int popValue = 0;
	int popRaw = 1;
	Stack<datatype> buffer = Stack<datatype>(stack.getSize());
	while (!stack.isEmpty())
	{
		buffer.push(stack.peek());
		stack.pop();
		if (buffer.peek() == stack.peek())
		{
			++popRaw;
		}
		else
		{
			if (popRaw > 2)
			{
				while (popRaw + 1 > 1)
				{
					--popRaw;
					++popValue;
					buffer.pop();
				}

				while (!buffer.isEmpty() && (buffer.peek() == stack.peek()))
				{
					stack.push(buffer.peek());
					buffer.pop();
				}
			}
			popRaw = 1;
		}
	}

	while (!buffer.isEmpty())
	{
		stack.push(buffer.peek());
		buffer.pop();
	}
	return popValue;
}


//void test()
//{
//	Stack stack(20);
//	stack.push(2);
//	stack.push(2);
//	stack.push(3);
//	stack.push(3);
//	stack.push(1);
//	stack.push(1);
//	stack.push(1);
//	stack.push(3);
//	stack.push(3);
//	stack.push(2);
//	stack.colorPrint();
//	std::cout << "___________________________\n";
//	std::cout << "popped: " << popRaws(stack) << '\n';
//	std::cout << "___________________________\n";
//	stack.colorPrint();
//	
//	stack.clear();
//	stack.push(1);
//	stack.push(2);
//	stack.push(3);
//	stack.push(4);
//	stack.push(5);
//	stack.push(6);
//	stack.push(7);
//	stack.push(8);
//	stack.push(9);
//	stack.push(10);
//	stack.colorPrint();
//	std::cout << "___________________________\n";
//	std::cout << "popped: " << popRaws(stack) << '\n';
//	std::cout << "___________________________\n";
//	stack.colorPrint();
//
//	stack.clear();
//	stack.push(3);
//	stack.push(1);
//	stack.push(1);
//	stack.push(2);
//	stack.push(3);
//	stack.push(3);
//	stack.push(3);
//	stack.push(2);
//	stack.push(2);
//	stack.push(1);
//	stack.push(4);
//	stack.colorPrint();
//	std::cout << "___________________________\n";
//	std::cout << "popped: " << popRaws(stack) << '\n';
//	std::cout << "___________________________\n";
//	stack.colorPrint();
//}
