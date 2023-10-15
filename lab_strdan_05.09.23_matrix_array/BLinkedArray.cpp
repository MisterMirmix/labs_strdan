#include "BLinkedArray.h"

void init(BNode* &head, BNode* &end)
{
	head = nullptr;
	end = nullptr;
}

bool isEmpty(BNode* head)
{
	return !(head);
}

void Print(BNode* head)
{
	BNode* current = head;
	while (current)
	{
		std::cout << current->value << '\t';
		current = current->next;
	}
	std::cout << '\n';
}

void addAfterBNode(BNode* pBNode, BNode*& end, int value)
{
	BNode* p = new BNode(value);
	
	if (pBNode != end)
	{
		p->next = pBNode->next;
		pBNode->next->prev = p;
	}
	else
	{
		end = p;
	}
	pBNode->next = p;
	p->prev = pBNode;
}


void addBeforeBnode(BNode* nBNode, BNode*& head, int value)
{
	BNode* p = new BNode(value);
	p->value = value;
	p->prev = nBNode->prev;
	if (nBNode != head)
	{
		nBNode->prev->next = p;
	}
	else
	{
		head = p;
	}
	nBNode->prev = p;
	p->next = nBNode;
}

void deleteCurrentNode(BNode*& current, BNode*& head, BNode*& end)
{

}

void deleteAfterBNode(BNode* pBNode, BNode*& end)
{
	if (pBNode != end)
	{
		BNode* p = pBNode->next;
		p->next = pBNode->next;
		if (p != end)
		{
			p->next->prev = pBNode;
		}
		else
		{
			end = pBNode;
		}
	}
}

void deleteBeforeBnode(BNode* nBNode, BNode*& head, int value)
{

}

void clear(BNode*& head)
{

}



