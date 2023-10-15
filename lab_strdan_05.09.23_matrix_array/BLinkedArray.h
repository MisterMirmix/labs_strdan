#pragma once
#include <iostream>
struct BNode {
	int value;
	BNode* next;
	BNode* prev;
	BNode(int newValue)
	{
		next = nullptr;
		prev = nullptr;
		value = newValue;
	}
};

void init(BNode*& head, BNode*& end);
bool isEmpty(BNode* head);
void Print(BNode* head);
void addAfterBNode(BNode* pBNode, BNode*& end, int value);
void addBeforeBnode(BNode* newBNode, BNode*& head, int value);
void deleteCurrentNode(BNode*& current, BNode*& head, BNode*& end);
void deleteAfterBNode(BNode* pBNode, BNode*& end);
void deleteBeforeBnode(BNode* newBNode, BNode*& head, int value);
void clear(BNode*& head);

