
#include "BalanceTree.h"



int main() 
{
	BalanceTree<int> t;
	for (int i = 1; i < 10; ++i)
	{
		t.insert(i);
		t.print();
		std::cout << '\n';
		std::cout << "---------------------------";
		std::cout << '\n';
	}
	t.insert(100);
	t.print();
	std::cout << '\n';
	std::cout << "---------------------------";
	std::cout << '\n';
	t.insert(-100);
	t.print();
	std::cout << '\n';
	std::cout << "---------------------------";
	std::cout << '\n';
	t.insert(-54);
	t.print();
	std::cout << '\n';
	std::cout << "---------------------------";
	std::cout << '\n';
	t.insert(-4);
	t.print();
	std::cout << '\n';
	std::cout << "---------------------------";
	std::cout << '\n';
	t.insert(25);
	t.print();
	std::cout << '\n';
	std::cout << "---------------------------";
	std::cout << '\n';


	t.remove(7);
	t.print();
	std::cout << '\n';
	std::cout << "---------------------------";
	std::cout << '\n';
	t.remove(5);
	t.print();
	std::cout << '\n';
	std::cout << "---------------------------";
	std::cout << '\n';
	t.remove(6);
	t.print();
	std::cout << '\n';
	std::cout << "---------------------------";
	std::cout << '\n';

	t.BFTraverse();
	std::cout << '\n';
	std::cout << "---------------------------";
	std::cout << '\n';
	std::cout << "pre\n";
	t.preorderTraverseIterative();
	std::cout << '\n';
	std::cout << "---------------------------";
	std::cout << '\n';
	t.preorderTraverse();
	std::cout << '\n';
	std::cout << "---------------------------";
	std::cout << '\n';
	std::cout << "in\n";
	t.inorderTraverseIterative();
	std::cout << '\n';
	std::cout << "---------------------------";
	std::cout << '\n';
	t.inorderTraverse();
	std::cout << '\n';
	std::cout << "---------------------------";
	std::cout << '\n';
	std::cout << "post\n";
	t.postorderTraverseIterative();
	std::cout << '\n';
	std::cout << "---------------------------";
	std::cout << '\n';
	t.postorderTraverse();
	std::cout << '\n';
	std::cout << "---------------------------";
	std::cout << '\n';
	
	
	
	
	return 0;
}






















