//#pragma once
//
//
//template <typename datatype>
//class TreeNode
//{
//	TreeNode() {};
//	TreeNode(const datatype& newData, TreeNode<datatype>* newLeft = nullptr, TreeNode<datatype>* newRight = nullptr)
//		: data(newData), left(newLeft), right(newRight) {};
//	datatype data;
//	TreeNode<datatype>* left;
//	TreeNode<datatype>* right; 
//	friend class BinaryTree<datatype>;
//};
//
//
//template<typename datatype>
//class BinaryTree
//{
//	TreeNode<datatype>* root;
//public:
//	BinaryTree();
//	BinaryTree(const datatype& newData);
//	BinaryTree(const datatype& newData, BinaryTree<datatype>& newLeft, BinaryTree<datatype>& newRight);
//	//BinaryTree(const BinaryTree<datatype>& tree);
//	//virtual ~BinaryTree();
//
//	//virtual bool isEmpty();
//	//virtual datatype getDataRoot() const;
//	//virtual void setDataRoot(const datatype& newData);
//	//
//	//virtual void attachLeft(const datatype& newData);
//	//virtual void attachRight(const datatype& newData);
//
//	//virtual void attachLeftSubtree(BinaryTree<datatype>& subtree);
//	//virtual void attachRightSubtree(BinaryTree<datatype>& subtree);
//
//	//virtual void detachLeftSubtree(BinaryTree<datatype>& subtree);
//	//virtual void detachRightSubtree(BinaryTree<datatype>& subtree);
//
//	//virtual BinaryTree<datatype> getLeftSubtree() const;
//	//virtual BinaryTree<datatype> getRightSubtree() const;
//
//	//virtual void preorder();
//	//virtual void inorder();
//	//virtual void postorder();
//
//	//virtual BinaryTree<datatype>& operator=(const BinaryTree<datatype>& rhs);
//
//protected:
//	/*BinaryTree(TreeNode<datatype>* prt);
//	void CopyTree(TreeNode<datatype>* ptr, TreeNode<datatype>*& newPtr);
//	void DestroyTree(TreeNode<datatype>*& ptr);
//
//	TreeNode<datatype>* getRoot() const;
//	void setRoot(TreeNode<datatype>* ptr);
//
//	void getChildRoots(TreeNode<datatype>* ptr, TreeNode<datatype>*& left, TreeNode<datatype>*& right) const;
//	void setChildRoots(TreeNode<datatype>* ptr, TreeNode<datatype>* left, TreeNode<datatype>* right);
//
//	void preorder(TreeNode<datatype>* prt);
//	void inorder(TreeNode<datatype>* prt);
//	void postorder(TreeNode<datatype>* prt);*/
//};
//
//
//template <typename datatype> 
//BinaryTree<datatype>::BinaryTree()
//{
//	root = nullptr;
//}
//
//template <typename datatype>
//BinaryTree<datatype>::BinaryTree(const datatype& newData) : root(new TreeNode<datatype>(newData))
//{
//
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
////template <typename datatype>
////BinaryTree<datatype>::BinaryTree(TreeNode<datatype>* ptr) : root(ptr)
////{
////
////}
//
////template <typename datatype>
////BinaryTree<datatype>::~BinaryTree()
////{
////	DestroyTree(root);
////}
//
////template <typename datatype>
////bool BinaryTree<datatype>::isEmpty()
////{
////	return (root != nullptr);
////}
////
////template <typename datatype>
////datatype BinaryTree<datatype>::getDataRoot() const
////{
////	return root->data;
////}
////
////template <typename datatype>
////void BinaryTree<datatype>::setDataRoot(const datatype& newData)
////{
////	root->data = newData;
////}
////
////template <typename datatype>
////void BinaryTree<datatype>::attachLeft(const datatype& newData)
////{
////	root->left->data = newData;
////}
////
////template <typename datatype>
////void BinaryTree<datatype>::attachRight(const datatype& newData)
////{
////	root->right->data = newData;
////}
////
////template <typename datatype>
////void BinaryTree<datatype>::attachLeftSubtree(BinaryTree<datatype>& subtree)
////{
////	root->left->data = subtree.root;
////}
////
////template <typename datatype>
////void BinaryTree<datatype>::attachRightSubtree(BinaryTree<datatype>& subtree)
////{
////	root->right->data = subtree.root;
////}
////
////template <typename datatype>
////void BinaryTree<datatype>::detachLeftSubtree(BinaryTree<datatype>& subtree)
////{
////
////}
////
////template <typename datatype>
////void BinaryTree<datatype>::detachRightSubtree(BinaryTree<datatype>& subtree)
////{
////
////}
//
////template <typename datatype>
////BinaryTree<datatype> BinaryTree<datatype>::getLeftSubtree() const
////{
////
////}
////
////template <typename datatype>
////BinaryTree<datatype> BinaryTree<datatype>::getRightSubtree() const
////{
////
////}
////
////template <typename datatype>
////void BinaryTree<datatype>::preorder()
////{
////
////}
////
////template <typename datatype>
////void BinaryTree<datatype>::inorder()
////{
////
////
////}
////template <typename datatype>
////void BinaryTree<datatype>::postorder()
////{
////
////}
////
////template <typename datatype>
////BinaryTree<datatype>& BinaryTree<datatype>::operator=(const BinaryTree<datatype>& rhs)
////{
////
////}