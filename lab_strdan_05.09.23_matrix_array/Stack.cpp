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
	std::cout << '\n';
}

void Stack::colorPrint()
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

int popRaws(Stack& stack)
{
	int popValue = 0;
	int popRaw = 1;
	Stack buffer = Stack(stack.getSize());
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


void test()
{
	Stack stack(20);
	stack.push(2);
	stack.push(2);
	stack.push(3);
	stack.push(3);
	stack.push(1);
	stack.push(1);
	stack.push(1);
	stack.push(3);
	stack.push(3);
	stack.push(2);
	stack.colorPrint();
	std::cout << "___________________________\n";
	std::cout << "popped: " << popRaws(stack) << '\n';
	std::cout << "___________________________\n";
	stack.colorPrint();
	
	stack.clear();
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);
	stack.push(6);
	stack.push(7);
	stack.push(8);
	stack.push(9);
	stack.push(10);
	stack.colorPrint();
	std::cout << "___________________________\n";
	std::cout << "popped: " << popRaws(stack) << '\n';
	std::cout << "___________________________\n";
	stack.colorPrint();

	stack.clear();
	stack.push(3);
	stack.push(1);
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(3);
	stack.push(3);
	stack.push(2);
	stack.push(2);
	stack.push(1);
	stack.push(4);
	stack.colorPrint();
	std::cout << "___________________________\n";
	std::cout << "popped: " << popRaws(stack) << '\n';
	std::cout << "___________________________\n";
	stack.colorPrint();
}
