//#include "Menu.h"
//
//template <typename T>
//void getSymbol(T& value, const std::string& message, const std::string& errorMessage)
//{
//	do {
//		std::cin.clear();
//		std::cin.ignore(std::cin.rdbuf()->in_avail());
//		std::cout << message;
//		std::cin >> value;
//		if (std::cin.fail())
//		{
//			std::cout << errorMessage << "\n";
//		}
//	} while (std::cin.fail());
//}
//
//void Menu::show()
//{
//	std::cout << "|---------------------------------------|\n";
//	std::cout << "|1) Show tree\n";
//	std::cout << "|2) Insert value\n";
//	std::cout << "|3) Insert values\n";
//	std::cout << "|4) Remove value\n";
//	std::cout << "|5) Remove values\n";
//	std::cout << "|6) Show leafs\n";
//	std::cout << "|7) Clear tree\n";
//	std::cout << "|8) Search value\n";
//	std::cout << "|0) Exit\n";
//	std::cout << "|---------------------------------------|\n";
//}
//
//void Menu::run()
//{
//	bool isExit = false;
//	int choosedOption;
//	while (!isExit)
//	{
//		show();
//		getSymbol(choosedOption, "choose option ", "!!!input error!!!");
//		while (choosedOption < 0 || choosedOption > 8)
//		{
//			std::cout << "!!!input error!!!" << '\n';
//			getSymbol(choosedOption, "choose option ", "!!!input error!!!");
//		} 
//		
//		switch (choosedOption)
//		{
//		case 0:
//			isExit = true;
//			break;
//		case 1:
//			tree.print();
//			break;
//		case 2:
//			int value;
//			getSymbol(value, "value >> ", "!!!input error!!!");
//			tree.insert(value);
//			break;
//		case 4:
//			int valuee;
//			getSymbol(valuee, "value >> ", "!!!input error!!!");
//			tree.remove(valuee);
//			break;
//		case 3:
//			int valueee;
//			getSymbol(valueee, "value (0 to exit) >> ", "!!!input error!!!");
//			/*tree.insert(value);*/
//			while (valueee != 0)
//			{
//				tree.insert(valueee);
//				getSymbol(valueee, "value (0 to exit) >> ", "!!!input error!!!");
//				
//			}
//			
//			break;
//		case 5:
//			int valueeee;
//			getSymbol(valueeee, "value (0 to exit) >> ", "!!!input error!!!");
//			/*tree.remove(valueeee);*/
//			while (valueeee != 0)
//			{
//				tree.remove(valueeee);
//				getSymbol(valueeee, "value (0 to exit) >> ", "!!!input error!!!");
//				
//			}
//			break;
//		case 6:
//			tree.showLeafs();
//			std::cout << '\n';
//			break;
//		case 7:
//			tree.destroyTree();
//			break;
//		case 8:
//			int v;
//			getSymbol(v, "value >> ", "!!!input error!!!");
//			std::cout << tree.contains(v) << '\n';
//			break;
//		}
//	}
//}
//
//
//
//void MenuTrie::show()
//{
//	std::cout << "|---------------------------------------|\n";
//	std::cout << "|1) Show trie\n";
//	std::cout << "|2) Insert word\n";
//	std::cout << "|3) Insert words\n";
//	std::cout << "|4) Remove word\n";
//	std::cout << "|5) Remove words\n";
//	std::cout << "|6) Show words that start with\n";
//	std::cout << "|7) Show words that end with\n";
//	std::cout << "|8) Load words from file\n";
//	std::cout << "|0) Exit\n";
//	std::cout << "|---------------------------------------|\n";
//}
//
////std::string reverse(std::string s)
////{
////	std::string result = s;
////	int i = 0;
////	for (char c : s)
////	{
////		result[result.size() - i] = c;
////		++i;
////	}
////
////	return result;
////}
//
//void MenuTrie::run()
//{
//	bool isExit = false;
//	int choosedOptionn;
//	while (!isExit)
//	{
//		show();
//		getSymbol(choosedOptionn, "choose option ", "!!!input error!!!");
//		while (choosedOptionn < 0 || choosedOptionn > 8)
//		{
//			std::cout << "!!!input error!!!" << '\n';
//			getSymbol(choosedOptionn, "choose option ", "!!!input error!!!");
//		}
//
//		switch (choosedOptionn)
//		{
//		case 0:
//		{
//			isExit = true;
//			break;
//		}
//		case 1:
//		{
//			tree.printAllWords();
//			break;
//		}
//		case 2:
//		{
//			std::string value;
//			getSymbol(value, "word >> ", "!!!input error!!!");
//			tree.insert(value);
//			break;
//		}
//		case 3:
//		{
//			std::string valueee;
//			getSymbol(valueee, "word (0 to exit) >> ", "!!!input error!!!");
//			/*tree.insert(value);*/
//			while (valueee != "0")
//			{
//				tree.insert(valueee);
//				getSymbol(valueee, "word (0 to exit) >> ", "!!!input error!!!");
//
//			}
//
//			break;
//		}
//		case 4:
//		{
//			std::string valuee;
//			getSymbol(valuee, "word >> ", "!!!input error!!!");
//			tree.remove(valuee);
//			break;
//		}
//		case 5:
//		{
//			std::string valueeee;
//			getSymbol(valueeee, "word (0 to exit) >> ", "!!!input error!!!");
//			/*tree.remove(valueeee);*/
//			while (valueeee != "0")
//			{
//				tree.remove(valueeee);
//				getSymbol(valueeee, "word (0 to exit) >> ", "!!!input error!!!");
//
//			}
//			break;
//		}
//		case 6:
//		{
//			std::string valueeeee;
//			getSymbol(valueeeee, "prefix >> ", "!!!input error!!!");
//			tree.printAllWordsThatStartWith(valueeeee);
//			std::cout << '\n';
//			break;
//		}
//		case 7:
//		{
//			std::string valueeeeee;
//			getSymbol(valueeeeee, "suffix >> ", "!!!input error!!!");
//			tree.printAllWordsWithSuffix(valueeeeee);
//			std::cout << '\n';
//			break;
//		}
//		case 8:
//		{
//			std::ifstream input("input.txt");
//			std::string line;
//			getline(input, line);
//			std::vector<std::string> vec = split(line, ',');
//			for (size_t i = 0; i < vec.size(); ++i)
//			{
//				reverse(vec[i].begin(), vec[i].end());
//				tree.insert(vec[i]);
//			}
//			std::cout << "Loading success" << '\n';
//			break;
//		}
//		}
//	}
//}