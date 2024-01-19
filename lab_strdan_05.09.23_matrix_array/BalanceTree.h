#pragma once

#include "Queue.h"
#include "Stack.h"

template<typename datatype> class BalanceTree
{
public:
	class BTNode
	{
	public:
		datatype data;
		int height;
		BTNode* left;
		BTNode* right;
		BTNode(datatype ndata) : data(ndata), height(1), left(nullptr), right(nullptr)
		{
		}
		
	};


private:
	BTNode* root;

	BTNode* LRotate(BTNode* ptr)
	{
		BTNode* q = ptr->right;
		ptr->right = q->left;
		q->left = ptr;
		fixHeight(ptr);
		fixHeight(q);
		
		return q;
	}

	BTNode* RRotate(BTNode* ptr)
	{
		BTNode* q = ptr->left;
		ptr->left = q->right;
		q->right = ptr;
		fixHeight(ptr);
		fixHeight(q);
		
		return q;
	}

	void fixHeight(BTNode*& ptr)
	{
		int hl = getHeight(ptr->left);
		int hr = getHeight(ptr->right);
		ptr->height = (hl < hr) ? hr + 1 : hl + 1;
	}

	int getHeight(BTNode* ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->height;
	}

	int balanceFactor(BTNode* ptr)
	{
		return (getHeight(ptr->left) - getHeight(ptr->right));
	}

	BTNode* balance(BTNode* p)
	{
		fixHeight(p);
		if (balanceFactor(p) == -2)
		{		
			if (balanceFactor(p->right) > 0)
			{
				p->right = RRotate(p->right);
			}
			return LRotate(p);
		}
		if (balanceFactor(p) == 2)
		{
			if (balanceFactor(p->left) < 0)
			{
				p->left = LRotate(p->left);
			}
			return RRotate(p);
		}
		return p;
	}

	void clear(BTNode*& node)
	{
		if (node != nullptr)
		{
			clear(node->left);
			clear(node->right);
			delete node;
			node = nullptr;
		}
	}

	void print(BTNode* ptr, int space = 0) {
		space += 1;
		if (ptr != nullptr)
		{
			print(ptr->right, space);
			for (int i = 1; i < space; ++i)
				std::cout << '\t';
			std::cout << ptr->data << '\n';
			print(ptr->left, space);
		}
		else
		{
			for (int i = 1; i < space; ++i)
				std::cout << '\t';
			std::cout << "X" << '\n';
		}
	}

	void insert(BTNode*& ptr, datatype d)
	{
		if (ptr != nullptr)
		{
			if ( d < ptr->data  )
			{
				insert(ptr->left, d);
			}
			if ( d > ptr->data )
			{
				insert(ptr->right, d);
			}
			ptr = balance(ptr);
		}
		else
		{
			ptr = new BTNode(d);
		}
		
	}

	void remove(BTNode*& ptr, datatype d)
	{
		if (ptr != nullptr)
		{
			if (ptr->data != d)
			{
				if (d < ptr->data)
				{
					remove(ptr->left, d);
				}
				if (d > ptr->data)
				{
					remove(ptr->right, d);
				}
				ptr = balance(ptr);
			}
			else
			{
				if (ptr->left == nullptr && ptr->right == nullptr)
				{
					delete ptr;
					ptr = nullptr;
				}
				else
				{
					if (ptr->left != nullptr && ptr->right != nullptr)
					{
						BTNode* p = ptr->right;
						while (p->left != nullptr)
						{
							p = p->left;
						}
						ptr->data = p->data;
						remove(ptr->right, ptr->data);
					}
					else
					{
						if (ptr->left != nullptr)
						{
							ptr->data = ptr->left->data;
							delete ptr->left;
							ptr->left = nullptr;
						}
						if (ptr->right != nullptr)
						{
							ptr->data = ptr->right->data;
							delete ptr->right;
							ptr->right = nullptr;
						}
					}
				}
			}
		}		
	}

	void BFTraverse(BTNode* ptr)
	{
		Queue<BTNode*> q;
		q.push(ptr);
		while (!q.isEmpty())
		{
			BTNode* cur = q.peek();
			if (cur->left != nullptr)
			{
				q.push(cur->left);
			}
			if (cur->right != nullptr)
			{
				q.push(cur->right);
			}
			std::cout << cur->data << '\t';
			q.pop();
		}
	}

	void inorderTraverseIterative(BTNode* ptr)
	{
		Stack<BTNode*> s;
		bool done = false;
		BTNode* cur = ptr;
		while (!done)
		{
			if (cur != nullptr)
			{
				s.push(cur);
				cur = cur->left;
			}
			else
			{
				if (!s.isEmpty())
				{
					cur = s.peek();
					std::cout << cur->data << '\t';
					s.pop();
					cur = cur->right;
				}
				else
				{
					done = true;
				}
			}
		}
	}

	void preorderTraverseIterative(BTNode* ptr)
	{
		Stack<BTNode*> s;
		bool done = false;
		BTNode* cur = ptr;
		while (!done)
		{
			if (cur != nullptr)
			{
				std::cout << cur->data << '\t';
				s.push(cur);
				cur = cur->left;
				
			}
			else
			{
				if (!s.isEmpty())
				{
					cur = s.peek();
					s.pop();
					cur = cur->right;
				}
				else
				{
					done = true;
				}
			}
		}
	}

	void postorderTraverseIterative(BTNode* ptr)
	{
		Stack<BTNode*> st;
		BTNode* curr = root;
		BTNode* prev = nullptr;
		do {
			while (curr != nullptr) {
				st.push(curr);
				curr = curr->left;
			}

			while (curr == nullptr && !st.isEmpty()) {
				curr = st.peek();

				if (curr->right == nullptr || curr->right == prev) {
					std::cout << curr->data << '\t';
					st.pop();
					prev = curr;
					curr = nullptr;
				}
				else {
					curr = curr->right;
				}
			}
		} while (!st.isEmpty());
	}

	void postorderTraverse(BTNode* ptr)
	{
		if (ptr != nullptr)
		{
			postorderTraverse(ptr->left);
			postorderTraverse(ptr->right);
			std::cout << ptr->data << '\t';
		}
	}

	void inorderTraverse(BTNode* ptr)
	{
		if (ptr != nullptr)
		{
			inorderTraverse(ptr->left);
			std::cout << ptr->data << '\t';
			inorderTraverse(ptr->right);
		}
	}

	void preorderTraverse(BTNode* ptr)
	{
		if (ptr != nullptr)
		{
			std::cout << ptr->data << '\t';
			preorderTraverse(ptr->left);
			preorderTraverse(ptr->right);
		}
	}

	void search(BTNode* ptr, datatype value, BTNode*& result)
	{
		if (ptr != nullptr)
		{
			if (ptr->data == value)
			{
				result = ptr;
				return;
			}
			if (ptr->data < value)
			{
				search(ptr->right, value, result);
			}
			if (ptr->data > value)
			{
				search(ptr->left, value, result);
			}
		}
	}
public:

	BTNode* search(datatype value)
	{
		BTNode* result = nullptr;
		search(root, value, result);
		return result;
	}

	void print(int space = 0) {
		print(root, space);
	}

	void BFTraverse()
	{
		BFTraverse(root);
	}

	void inorderTraverseIterative()
	{
		inorderTraverseIterative(root);
	}

	void preorderTraverseIterative()
	{
		preorderTraverseIterative(root);
	}

	void postorderTraverseIterative()
	{
		postorderTraverseIterative(root);
	}

	void postorderTraverse()
	{
		postorderTraverse(root);
	}

	void inorderTraverse()
	{
		inorderTraverse(root);
	}

	void preorderTraverse()
	{
		preorderTraverse(root);
	}

	

	BalanceTree() : root(nullptr) {}
	BalanceTree(datatype ndata) : root(new BTNode(ndata)) {}
	~BalanceTree()
	{
		clear(root);
	}

	void insert(datatype data)
	{
		insert(root, data);
	}

	void remove(datatype data)
	{
		remove(root, data);
	}

	bool isEmpty()
	{
		return (root == nullptr);
	}
};

