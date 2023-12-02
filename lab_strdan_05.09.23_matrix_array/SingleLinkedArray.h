#pragma once
#include <iostream>
#include <ctime>
struct Node
{
	int value = 0;
	Node* next = nullptr;
};

void addToHead(Node* &head, int value);
void addAfterNode(Node* &node, int value);
void print(Node* head);
Node* searchValue(Node* head, int value);
void deleteHead(Node* &head);
void deleteAfterNode(Node* &node);
void deleteAllNegative(Node*& head);
Node* genRandList(int value);




