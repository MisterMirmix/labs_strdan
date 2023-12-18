#pragma once
#include "TreeNode.h"

template <typename datatype> 
class Set
{
	
	Set(const BinaryTree<datatype>& nset)
	{
		set = nset;
	}
	BinaryTree<datatype> set;
public:
	Set() : set(BinaryTree<datatype>()){};
	
	Set(const Set& other)
	{
		set = other.set;
	}
	
	void insertValue(const datatype& data)
	{
		set.insert(data);
	}
	
	void print(void(*visit)(datatype& data))
	{
		set.inorderTraverse(visit);
	}
	
	void remove(const datatype& data)
	{
		set.remove(data);
	}
	
	bool contains(const datatype& data) const
	{
		return set.contains(data);
	}

	Set<datatype> intersection(const Set<datatype>& other) const
	{
		Set<datatype> ptr;
		if (other.set.isEmpty())
		{
			ptr.set = other.set;
		}
		else
		{
			set.removeCopy(other.set, ptr.set);
		}
		return ptr;
	}

	Set<datatype> without(const Set<datatype>& other) const
	{
		Set<datatype> ptr;
		if (other.set.isEmpty())
		{
			ptr.set = set;
		}
		else
		{
			set.removeNotCopy(other.set, ptr.set);
		}
		return ptr;
	}

	Set<datatype> unionn(const Set<datatype>& other) const
	{
		Set<datatype> ptr;
		ptr.set.insert(set);
		ptr.set.insert(other.set);
		return ptr;
	}

	Set<datatype> symmDiff(const Set<datatype>& other) const
	{
		return (this->without(other).unionn(other.without(*this)));
	}

	bool isEmpty()
	{
		return set.isEmpty();
	}

};
