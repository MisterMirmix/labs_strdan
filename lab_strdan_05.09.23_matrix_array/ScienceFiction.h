//#pragma once
//#include "BLinkedArray.h"
//
//struct ScienceFiction
//{
//	std::string author;
//	std::string name;
//	unsigned short int year;
//	unsigned short int value;
//	std::string speciality;
//	ScienceFiction()
//	{
//		author = "";
//		name = "";
//		year = 0;
//		value = 0;
//		speciality = "";
//	}
//	ScienceFiction(std::string _author, std::string _name,
//		unsigned short int _year, unsigned short int _value, std::string _speciality)
//	{
//		author = _author;
//		name = _name;
//		year = _year;
//		value = _value;
//		speciality = _speciality;
//	}
//	ScienceFiction(const ScienceFiction& n)
//	{
//		author = n.author;
//		name = n.name;
//		year = n.year;
//		value = n.value;
//		speciality = n.speciality;
//	}
//	ScienceFiction(const std::vector<std::string>& vec)
//	{
//		author = vec[0];
//		name = vec[1];
//		year = stoi(vec[2]);
//		value = stoi(vec[3]);
//		speciality = vec[4];
//	}
//};
//
//std::ostream& operator << (std::ostream& out, const ScienceFiction& obj);
//std::vector<std::string> split(const std::string& str, char delimiter);
//bool isEarlier(BNode<ScienceFiction>* left, BNode<ScienceFiction>* right);
//void sortByYear(BList<ScienceFiction>& list);
//void deleteByYear(std::string inputFileName, std::string outputFileName, unsigned short int minYear);
//
//
//
