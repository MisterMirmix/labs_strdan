#pragma once
#include <iostream>

template <typename datatype>
struct TNode
{
	datatype data;
	TNode* left;
	TNode* right;
	TNode(datatype ndata) : data(ndata), left(nullptr), right(nullptr){}
};

template <typename datatype> bool isEmpty(TNode<datatype>* root);
template <typename datatype> void init(TNode<datatype>*& root);
template <typename datatype> void init(TNode<datatype>*& root, const datatype& elem);
template <typename datatype> bool attachLeftSubtree(TNode<datatype>* root, TNode<datatype>* subtree);
template <typename datatype> bool attachRightSubtree(TNode<datatype>* root, TNode<datatype>* subtree);
template <typename datatype> void init(TNode<datatype>*& root, const datatype& elem, 
	TNode<datatype>* leftSubtree, TNode<datatype>* rightSubtree);
template <typename datatype> void detachLeftSubtree(TNode<datatype>* root, TNode<datatype>*& subtree);
template <typename datatype> void detachRightSubtree(TNode<datatype>* root, TNode<datatype>*& subtree);
template <typename datatype> void copy(TNode<datatype>* root, TNode<datatype>*& newRoot);
template <typename datatype> void prefOrder(TNode<datatype>* root);
template <typename datatype> void inOrder(TNode<datatype>* root);
template <typename datatype> void postOrder(TNode<datatype>* root);

template <typename datatype>
bool isEmpty(TNode<datatype>* root)
{
	return !(root);
}

template <typename datatype>
void init(TNode<datatype>*& root)
{
	root = nullptr;
}

template <typename datatype>
void init(TNode<datatype>*& root, const datatype& elem)
{
	root = new TNode<datatype>(elem);
}

template <typename datatype>
bool attachLeftSubtree(TNode<datatype>* root, TNode<datatype>* subtree)
{
	bool isAttached = false;
	if (root->left == nullptr)
	{
		root->left = subtree;
		isAttached = true;
	}
	return isAttached;
}

template <typename datatype>
bool attachRightSubtree(TNode<datatype>* root, TNode<datatype>* subtree)
{
	bool isAttached = false;
	if (root->right == nullptr)
	{
		root->right = subtree;
		isAttached = true;
	}
	return isAttached;
}

template <typename datatype>
void init(TNode<datatype>*& root, const datatype& elem, TNode<datatype>* leftSubtree, TNode<datatype>* rightSubtree)
{
	init(root, elem);
	attachLeftSubtree(root, leftSubtree);
	attachRightSubtree(root, rightSubtree);
}


template <typename datatype>
void detachLeftSubtree(TNode<datatype>* root, TNode<datatype>*& subtree)
{
	if (root != nullptr)
	{
		subtree = root->left;
		root->left = nullptr;
	}
}

template <typename datatype>
void detachRightSubtree(TNode<datatype>* root, TNode<datatype>*& subtree)
{
	if (root != nullptr)
	{
		subtree = root->right;
		root->right = nullptr;
	}
}

template <typename datatype>
void copy(TNode<datatype>* root, TNode<datatype>*& newRoot)
{
	if (root != nullptr)
	{
		newRoot = new TNode<datatype>(root->data);
		copy(root->left, newRoot->left);
		copy(root->right, newRoot->right);
	}
	else
	{
		newRoot = nullptr;
	}
}


template <typename datatype>
void prefOrder(TNode<datatype>* root)
{
	if (root != nullptr)
	{
		std::cout << root->data << '\t';
		prefOrder(root->left);
		prefOrder(root->right);
	}
}

template <typename datatype>
void inOrder(TNode<datatype>* root)
{
	if (root != nullptr)
	{
		inOrder(root->left);
		std::cout << root->data << '\t';
		inOrder(root->right);
	}
	
}

template <typename datatype>
void postOrder(TNode<datatype>* root)
{
	if (root != nullptr)
	{
		postOrder(root->left);
		postOrder(root->right);
		std::cout << root->data << '\t';
	}
}


template <typename datatype>
void print(TNode<datatype>* root, int space = 0) {
	if (root != nullptr)
	{
		space += 1;
		print(root->right, space);
		for (int i = 1; i < space; ++i)
			std::cout << '\t';
		std::cout << root->data << std::endl;
		print(root->left, space);
	}
}