//#include "ScienceFiction.h"
//
//std::vector<std::string> split(const std::string& str, char delimiter)
//{
//	std::vector<std::string> result;
//	size_t i = 0;
//	for (size_t j = 0; j < str.size(); ++j) {
//		if (str[j] == delimiter) {
//			result.push_back(str.substr(i, j - i));
//			i = j + 1;
//		}
//	}
//	result.push_back(str.substr(i));
//	return result;
//}
//
//std::ostream& operator << (std::ostream& out, const ScienceFiction& obj)
//{
//	out << obj.author << " " << obj.name << " " << obj.year << " " << obj.value << " " << obj.speciality << '\n';
//	return out;
//}
//
//bool isEarlier(BNode<ScienceFiction>* left, BNode<ScienceFiction>* right)
//{
//	return (left->value.year < right->value.year);
//}
//
//void sortByYear(BList<ScienceFiction>& list)
//{
//	list.sortByCondition(isEarlier);
//}
//
//void deleteByYear(std::string inputFileName, std::string outputFileName, unsigned short int minYear)
//{
//	std::vector<ScienceFiction> vec;
//	BList<ScienceFiction> list;
//	std::ifstream input = std::ifstream(inputFileName);
//	if (input)
//	{
//		std::string line;
//		while (!input.eof())
//		{
//			getline(input, line);
//			list.addToHead(ScienceFiction(split(line, ' ')));
//		}
//	}
//	input.close();
//
//	list.sortByCondition(isEarlier);
//
//	std::ofstream output = std::ofstream(outputFileName);
//	BNode<ScienceFiction>* current = list.getHead();
//	if (output)
//	{
//		while (current != nullptr)
//		{
//			output << current->value;
//			current = current->next;
//		}
//
//		output << ">= " << minYear << '\n';
//		current = list.getHead();
//		while (current != nullptr)
//		{
//			if(current->value.year >= minYear)
//				output << current->value;
//			current = current->next;
//		}
//	}
//	output.close();
//}