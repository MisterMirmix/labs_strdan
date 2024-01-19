//#pragma once
//#include <iostream>
//#include <vector>
//#include <ctime>
//#include "Queue.h"
////template<typename datatype>
////class BalanceTree;
//
//template<typename datatype>
//class BinaryTree;
//
//template <typename datatype>
//class TreeNode
//{
//	/*friend class BalanceTree<datatype>;*/
//	friend class BinaryTree<datatype>;
//	datatype data;
//	TreeNode<datatype>* left;
//	TreeNode<datatype>* right;
//
//	
//
//public:
//	
//
//	
//
//	TreeNode() {};
//	TreeNode(const datatype& newData, TreeNode<datatype>* newLeft = nullptr, TreeNode<datatype>* newRight = nullptr)
//		: data(newData), left(newLeft), right(newRight) {};
//
//};
//
//template<typename datatype>
//void visitt(datatype& a)
//{
//	std::cout << a << ' ';
//}
//
//template<typename datatype>
//class BinaryTree
//{
//protected:
//	TreeNode<datatype>* root;
//
//	std::vector<datatype> BFTraverse(TreeNode<datatype>* ptr)
//	{
//		Queue<TreeNode<datatype>*> q;
//		q.push(ptr);
//		std::vector<datatype> vec;
//		
//		if (ptr == nullptr)
//		{
//			vec.resize(1);
//			return vec;
//		}
//		while (!q.isEmpty())
//		{
//			TreeNode<datatype>* cur = q.peek();
//
//			if (cur->left != nullptr)
//			{
//				q.push(cur->left);
//			}
//			if (cur->right != nullptr)
//			{
//				q.push(cur->right);
//			}
//
//			vec.resize(1);
//			vec.push_back(cur->data);
//			
//						/*std::cout << cur->data << '\t';*/
//			q.pop();
//		}
//		return vec;
//	}
//
//	int findSubtrees(TreeNode<datatype>* ptr, std::vector<datatype> vec)
//	{
//		if (ptr == nullptr)
//		{
//			return 0;
//		}
//		std::vector<datatype> current = BFTraverse(ptr);
//		if (vec.size() == current.size())
//		{
//			bool d = true;
//			for (int i = 0; i < vec.size(); ++i)
//			{
//				if (vec[i] != current[i])
//				{
//					d = false;
//				}
//			}
//			if (d)
//			{
//				return 1;
//			}
//		}
//		return findSubtrees(ptr->left, vec) + findSubtrees(ptr->right);
//	}
//
//public:
//
//	int findSubtrees(const BinaryTree<datatype>& other)
//	{
//
//		std::vector<datatype> k = BFTraverse(other.root);
//		return findSubtrees(root, k);
//	}
//
//	/*void generateTree(int size = 10)
//	{
//		destroyTree();
//		if (size <= 0)
//		{
//			size = 10 
//		}
//		if (root == nullptr)
//		{
//			root = new TreeNode(rand())
//		}
//		TreeNode<datatype>* cur = root
//		int halfSize = size / 2;
//		while (size != halfSize)
//		{
//
//		}
//	}*/
//	//void BFTraverse(TreeNode<datatype>* ptr, const std::vector<datatype>& vec, size_t i = 1)
//	//{
//	//	Queue<TreeNode<datatype>*> q;
//	//	q.push(ptr);
//	//	TreeNode<datatype>* cur;
//	//	while (i < vec.size())
//	//	{
//	//		cur = q.peek();
//	//		if (cur == nullptr)
//	//		{
//	//			cur = new TreeNode<datatype>(vec[i]);
//	//			++i;
//	//			/*q.push(cur->left);
//	//			q.push(cur->right);*/
//	//			/*std::cout << ptr->right->data;*/
//	//		}
//	//		if (cur->left == nullptr)
//	//		{
//	//			q.push(cur->left);
//	//		}
//	//		if (cur->right == nullptr)
//	//		{
//	//			q.push(cur->right);
//	//		}
//	//		/*std::cout << cur->data << '\t';*/
//	//		q.pop();
//	//	}
//	//}
//	/*void addNode(TreeNode<datatype>*& root, const std::vector<datatype>& vec, size_t i = 1, size_t size)
//	{
//		if (root->left == nullptr && i < size)
//		{
//			root->left->data = vec[i++];
//		}
//		if (root->right == nullptr && i < size)
//		{
//			root->right->data = vec[i++];
//		}
//		
//
//	}*/
//	BinaryTree();
//	BinaryTree(const datatype& newData);
//	BinaryTree(const datatype& newData, BinaryTree<datatype>& newLeft, BinaryTree<datatype>& newRight);
//	BinaryTree(const BinaryTree<datatype>& tree);
//	/*BinaryTree(const std::vector<datatype>& vec)
//	{
//		root = new TreeNode<datatype>(vec[0]);
//		size_t size = vec.size();
//		TreeNode<datatype>* cur = root;
//		BFTraverse(root, vec, 1);*/
//		/*for (size_t i = 1; i < (size / 2); cur = cur->left)
//		{
//			if (cur->left == nullptr)
//			{
//				cur->left = new TreeNode<datatype>(vec[i]);
//				++i;
//			}
//			if (cur->right == nullptr)
//			{
//				cur->right = new TreeNode<datatype>(vec[i]);
//				++i;
//			}
//		}
//		cur = root;
//		for (size_t j = size/2 + 1; j < size; cur = cur->right)
//		{
//			if (cur->left == nullptr)
//			{
//				if (j < size)
//				{
//					cur->left = new TreeNode<datatype>(vec[j]);
//					++j;
//				}
//				
//			}
//			if (cur->right == nullptr)
//			{
//				if (j < size)
//				{
//					cur->right = new TreeNode<datatype>(vec[j]);
//					++j;
//				}
//				
//			}
//		}*/
//	//}
//	~BinaryTree();
//
//	void showLeafs(/*void(*visit)(const datatype& data)*/)
//	{
//		showLeafs(root, visitt);
//	}
//	
//	void print(int space = 0) {
//		print(root, space);
//	}
//
//	void insert(const datatype& data);
//	void insert(const BinaryTree<datatype>& other);
//	
//
//	void remove(const datatype& data);
//	void removeCopy(const BinaryTree<datatype>& other, BinaryTree<datatype>& ptr) const;
//	void removeNotCopy(const BinaryTree<datatype>& other, BinaryTree<datatype>& ptr) const;
//
//	bool contains(const datatype& data) const;
//	
//	bool isEmpty() const;
//	datatype getDataRoot() const;
//	void setDataRoot(const datatype& newData);
//	
//	void attachLeft(const datatype& newData);
//	void attachRight(const datatype& newData);
//
//	void attachLeftSubtree(BinaryTree<datatype>& subtree);
//	void attachRightSubtree(BinaryTree<datatype>& subtree);
//
//	void detachLeftSubtree(BinaryTree<datatype>& subtree);
//	void detachRightSubtree(BinaryTree<datatype>& subtree);
//
//	BinaryTree<datatype> getLeftSubtree() const;
//	BinaryTree<datatype> getRightSubtree() const;
//
//	void preorderTraverse(void(*visit)(datatype& data))
//	{
//		preorder(root, visit);
//	}
//	void inorderTraverse(void(*visit)(datatype& data)) const
//	{
//		inorder(root, visit);
//	}
//	void postorderTraverse(void(*visit)(datatype& data))
//	{
//		postorder(root, visit);
//	}
//
//	BinaryTree<datatype>& operator=(const BinaryTree<datatype>& rhs);
//	void destroyTree()
//	{
//		destroyTree(root);
//	}
//
//
//	
//protected:
//	void print(TreeNode<datatype>* ptr, int space = 0) {
//		space += 1;
//		if (ptr != nullptr)
//		{
//			print(ptr->right, space);
//			for (int i = 1; i < space; ++i)
//				std::cout << '\t';
//			std::cout << ptr->data << std::endl;
//			print(ptr->left, space);
//		}
//		else
//		{
//			for (int i = 1; i < space; ++i)
//				std::cout << '\t';
//			std::cout << "X" << std::endl;
//		}
//	}
//	void showLeafs(TreeNode<datatype>* ptr, void(*visit)(const datatype& data))
//	{
//		if (ptr != nullptr)
//		{
//			if (ptr->left == nullptr && ptr->right == nullptr)
//			{
//				visit(ptr->data);
//			}
//			showLeafs(ptr->left, visit);
//			showLeafs(ptr->right, visit);
//		}
//
//	}
//
//	BinaryTree(TreeNode<datatype>* prt);
//	void copyTree(TreeNode<datatype>* ptr, TreeNode<datatype>*& newPtr) const;
//	void destroyTree(TreeNode<datatype>*& ptr);
//
//	void insert(TreeNode<datatype>*& ptr, const datatype& data);
//	void insert(TreeNode<datatype>* other);
//	void removeCopy(TreeNode<datatype>* other, BinaryTree<datatype>& ptr) const;
//	void removeNotCopy(TreeNode<datatype>* other, BinaryTree<datatype>& ptr) const;
//	void remove(TreeNode<datatype>*& ptr, const datatype& data);
//	bool contains(TreeNode<datatype>* ptr, const datatype& data) const;
//
//	void preorder(TreeNode<datatype>* prt, void(*visit)(datatype& data))
//	{
//		if (prt != nullptr)
//		{
//			visit(prt->data);
//			preorder(prt->left, visit);
//			preorder(prt->right, visit);
//		}
//	}
//	void inorder(TreeNode<datatype>* prt, void(*visit)(datatype& data)) const
//	{
//		if (prt != nullptr)
//		{
//			inorder(prt->left, visit);
//			visit(prt->data);
//			inorder(prt->right, visit);
//
//		}
//	}
//
//	void postorder(TreeNode<datatype>* prt, void(*visit)(datatype& data))
//	{
//		if (prt != nullptr)
//		{
//			postorder(prt->left, visit);
//			postorder(prt->right, visit);
//			visit(prt->data);
//		}
//	}
//};
//
//
//template <typename datatype> 
//BinaryTree<datatype>::BinaryTree() : root(nullptr)
//{
//
//}
//
//template <typename datatype>
//BinaryTree<datatype>::BinaryTree(const datatype& newData) : root(new TreeNode<datatype>(newData))
//{
//
//}
//
//template <typename datatype>
//BinaryTree<datatype>::BinaryTree(const datatype& newData, BinaryTree<datatype>& newLeft, BinaryTree<datatype>& newRight)
//	: root(new TreeNode<datatype>(newData))
//{
//	attachLeftSubtree(newLeft);
//	attachRightSubtree(newRight);
//}
//
//template<typename datatype>
//BinaryTree<datatype>::BinaryTree(const BinaryTree<datatype>& tree)
//{
//	copyTree(tree.root, root);
//}
//
//template <typename datatype>
//BinaryTree<datatype>::~BinaryTree()
//{
//	destroyTree(root);
//}
//
//template<typename datatype>
//void BinaryTree<datatype>::insert(const datatype& data)
//{
//	insert(root, data);
//}
//
//template<typename datatype>
//void BinaryTree<datatype>::insert(const BinaryTree<datatype>& other)
//{
//	if (!other.isEmpty())
//	{
//		insert(other.root);
//	}
//}
//
//template<typename datatype>
//void BinaryTree<datatype>::insert(TreeNode<datatype>* other)
//{
//	if (other != nullptr)
//	{
//		insert(other->data);
//		insert(other->left);
//		insert(other->right);
//	}
//}
//
//template<typename datatype>
//void BinaryTree<datatype>::removeCopy(const BinaryTree<datatype>& other, BinaryTree<datatype>& ptr) const
//{
//	if (!other.isEmpty())
//	{
//		removeCopy(other.root, ptr);
//		/*removeCopy(other.getLeftSubtree(), ptr);
//		removeCopy(other.getRightSubtree(), ptr);
//		if (contains(other.getDataRoot()))
//		{
//			ptr.insert(other.getDataRoot());
//		}*/
//	}
//}
//
//template<typename datatype>
//void BinaryTree<datatype>::removeCopy(TreeNode<datatype>* other, BinaryTree<datatype>& ptr) const
//{
//	if (other != nullptr)
//	{
//		if (contains(other->data))
//		{
//			ptr.insert(other->data);
//		}
//		removeCopy(other->left, ptr);
//		removeCopy(other->right, ptr);
//		
//	}
//}
//
//template<typename datatype>
//void BinaryTree<datatype>::removeNotCopy(TreeNode<datatype>* other, BinaryTree<datatype>& ptr) const
//{
//	if (other != nullptr)
//	{
//		if (!contains(other->data))
//		{
//			ptr.insert(other->data);
//		}
//		removeNotCopy(other->left, ptr);
//		removeNotCopy(other->right, ptr);
//		
//	}
//}
//
//template<typename datatype>
//void BinaryTree<datatype>::removeNotCopy(const BinaryTree<datatype>& other, BinaryTree<datatype>& ptr) const
//{
//	if (!other.isEmpty())
//	{
//		removeNotCopy(other.root, ptr);
//		/*removeCopy(other.getLeftSubtree(), ptr);
//		removeCopy(other.getRightSubtree(), ptr);
//		if (!contains(other.getDataRoot()))
//		{
//			ptr.insert(other.getDataRoot());
//		}*/
//	}
//}
//
//
//template<typename datatype>
//void BinaryTree<datatype>::remove(const datatype& data)
//{
//	remove(root, data);
//}
//
//template<typename datatype>
//bool BinaryTree<datatype>::contains(const datatype& data) const
//{
//	return contains(root, data);
//}
//
//template <typename datatype>
//bool BinaryTree<datatype>::isEmpty() const
//{
//	return (root == nullptr);
//}
//
//template <typename datatype>
//datatype BinaryTree<datatype>::getDataRoot() const
//{
//	return root->data;
//}
//
//template <typename datatype>
//void BinaryTree<datatype>::setDataRoot(const datatype& newData)
//{
//	root->data = newData;
//}
//
//template <typename datatype>
//void BinaryTree<datatype>::attachLeft(const datatype& newData)
//{
//	root->left = new TreeNode<datatype>(newData);
//}
//
//template <typename datatype>
//void BinaryTree<datatype>::attachRight(const datatype& newData)
//{
//	root->right = new TreeNode<datatype>(newData);
//}
//
//template <typename datatype>
//void BinaryTree<datatype>::attachLeftSubtree(BinaryTree<datatype>& subtree)
//{
//	/*copyTree(subtree.root, root->left);*/
//	
//	root->left = subtree.root;
//	subtree.root = nullptr;
//}
//
//template <typename datatype>
//void BinaryTree<datatype>::attachRightSubtree(BinaryTree<datatype>& subtree)
//{
//	/*copyTree(subtree.root, root->right);*/
//	root->right = subtree.root;
//	subtree.root = nullptr;
//}
//
//template <typename datatype>
//void BinaryTree<datatype>::detachLeftSubtree(BinaryTree<datatype>& subtree)
//{
//	subtree = BinaryTree(root->left);
//	root->left = nullptr;
//}
//
//template <typename datatype>
//void BinaryTree<datatype>::detachRightSubtree(BinaryTree<datatype>& subtree)
//{
//	subtree = BinaryTree(root->right);
//	root->right = nullptr;
//}
//
//template <typename datatype>
//BinaryTree<datatype> BinaryTree<datatype>::getLeftSubtree() const
//{
//	TreeNode<datatype>* ptr;
//	copyTree(root->left, ptr);
//	return BinaryTree(ptr);
//}
//
//template <typename datatype>
//BinaryTree<datatype> BinaryTree<datatype>::getRightSubtree() const
//{
//	TreeNode<datatype>* ptr;
//	copyTree(root->right, ptr);
//	return BinaryTree(ptr);
//}
//
//template <typename datatype>
//BinaryTree<datatype>& BinaryTree<datatype>::operator=(const BinaryTree<datatype>& rhs)
//{
//	if (this != &rhs)
//	{
//		destroyTree(root);
//		copyTree(rhs.root, root);
//	}
//	return *this;
//}
//
///// protected
//
//template <typename datatype>
//BinaryTree<datatype>::BinaryTree(TreeNode<datatype>* ptr) : root(ptr)
//{
//
//}
//
//template <typename datatype>
//void BinaryTree<datatype>::copyTree(TreeNode<datatype>* ptr, TreeNode<datatype>*& newPtr) const
//{
//	if (ptr != nullptr)
//	{
//		newPtr = new TreeNode<datatype>(ptr->data);
//		copyTree(ptr->left, newPtr->left);
//		copyTree(ptr->right, newPtr->left);
//	}
//	else
//	{
//		newPtr = nullptr;
//	}
//}
//
//template <typename datatype>
//void BinaryTree<datatype>::destroyTree(TreeNode<datatype>*& ptr)
//{
//	if (ptr != nullptr)
//	{
//		destroyTree(ptr->left);
//		destroyTree(ptr->right);
//		delete ptr;
//		ptr = nullptr;
//	}
//}
//
//template<typename datatype>
//void BinaryTree<datatype>::insert(TreeNode<datatype>*& ptr, const datatype& data)
//{
//	if (ptr == nullptr)
//	{
//		ptr = new TreeNode<datatype>(data);
//	}
//	else
//	{
//		if (ptr->data < data)
//		{
//			insert(ptr->right, data);
//		}
//		if (ptr->data > data)
//		{
//			insert(ptr->left, data);
//		}
//	}
//}
//
//template<typename datatype>
//void BinaryTree<datatype>::remove(TreeNode<datatype>*& ptr, const datatype& data)
//{
//	if (ptr != nullptr)
//	{
//		if (ptr->data == data)
//		{
//			if (ptr->left == nullptr && ptr->right == nullptr)
//			{
//				delete ptr;
//				ptr = nullptr;
//			}
//			else
//			{
//				if (ptr->left == nullptr || ptr->right == nullptr)
//				{
//					TreeNode<datatype>* tmp = ptr;
//					if (ptr->left != nullptr)
//						ptr = ptr->left;
//					else
//						ptr = ptr->right;
//					delete tmp;
//				}
//				else
//				{
//					TreeNode<datatype>* current = ptr->right;
//					while (current->left != nullptr)
//						current = current->left;
//					ptr->data = current->data;
//					remove(ptr->right, current->data);
//				}
//			}
//		}
//		else
//		{
//			if (ptr->data < data)
//			{
//				remove(ptr->right, data);
//			}
//			else
//			{
//				remove(ptr->left, data);
//			}
//		}
//	}
//}
//
//template<typename datatype>
//bool BinaryTree<datatype>::contains(TreeNode<datatype>* ptr, const datatype& data) const
//{
//	if (ptr != nullptr)
//	{	
//		if (ptr->data == data)
//		{
//			return true;
//		}
//		return (contains(ptr->left, data) || contains(ptr->right, data));
//	}
//	return false;
//}
//
//
