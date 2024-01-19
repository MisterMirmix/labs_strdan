#pragma once

template<typename datatype>
class QueueMassiv
{
	datatype* queue;
	int capacity;
	int size;
	int top;
	int tail;
	void resize();
public:
	QueueMassiv();
	QueueMassiv(int _size);
	~QueueMassiv();
	int getSize();
	void push(datatype elem);
	void pop();
	datatype peek();
	bool isEmpty();
	void clear();
	void print();
};

template<typename datatype>
void QueueMassiv<datatype>::resize()
{
	/*size *= 2;
	datatype* a = new datatype[size];
	for (int i = 0; i <= top; ++i)
	{
		a[top-i] = queue[top-i];
	}
	delete[] queue;
	queue = a;
	a = nullptr;*/

}
template<typename datatype>
QueueMassiv<datatype>::QueueMassiv() : size(0), top(-1), tail(-1), capacity(10), queue(new datatype[10])
{
}
template<typename datatype>
QueueMassiv<datatype>::QueueMassiv(int _size) : size(0), top(-1), tail(-1), capacity(_size), queue(new datatype[_size])
{
}

template<typename datatype>
QueueMassiv<datatype>::~QueueMassiv()
{
	delete[] queue;
	queue = nullptr;
}

template<typename datatype>
int QueueMassiv<datatype>::getSize()
{
	return size;
}

template<typename datatype>
void QueueMassiv<datatype>::push(datatype elem)
{
	/*if (capacity == size) {
		resize();
	}*/
	if (tail == -1)
	{
		tail = 0;
	}
	++size;
	top = (top + 1) % capacity;;
	queue[top] = elem;
}

template<typename datatype>
void QueueMassiv<datatype>::pop()
{
	if (tail != -1 && top != -1)
	{
		tail = (1 + tail) % capacity;
		--size;
		if (size == -1)
		{
			size = 0;
			tail = -1;
			top = -1;
		}
	}
}

template<typename datatype>
datatype QueueMassiv<datatype>::peek()
{
	return queue[tail];
}

template<typename datatype>
bool QueueMassiv<datatype>::isEmpty()
{
	return (size == 0);
}

template<typename datatype>
void QueueMassiv<datatype>::clear()
{
	top = -1;
	tail = -1;
}

template<typename datatype>
void QueueMassiv<datatype>::print()
{
	if (!isEmpty() )
	{
		for (int i = tail; i != top + 1; i = (1 + i) % capacity)
		{
			std::cout << queue[i] << '\t';
		}
	}
	else
	{
		std::cout << "nullptr";
	}
	
}

