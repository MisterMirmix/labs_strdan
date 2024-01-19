
#include "HeaderCycleBilinkedList.h"

int main()
{
	HBCNode* head;
	init(head);
	print(head);
	std::cout << std::endl;
	addBeforeNode(head, 3);
	print(head); 
	std::cout << std::endl;
	addBeforeNode(head->prev, 4);
	print(head);
	std::cout << std::endl;
	addBeforeNode(head->next, 5);
	print(head);
	std::cout << std::endl;
	addAfterNode(head, 6);
	print(head);
	std::cout << std::endl;
	addAfterNode(head->next, 7);
	print(head);
	std::cout << std::endl;
	addAfterNode(head->prev, 8);
	print(head);
	std::cout << std::endl;



	deleteAfterNode(head,head);
	print(head);
	std::cout << std::endl;
	deleteBeforeNode(head, head);
	print(head);
	std::cout << std::endl;
	deleteCurrentNode(head, head->next);
	print(head);
	std::cout << std::endl;


	return 0;
}