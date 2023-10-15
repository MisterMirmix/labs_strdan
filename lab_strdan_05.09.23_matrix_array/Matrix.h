#pragma once
#include <iostream>

//int** init(int n, int m);
//
////void print(int** matrix, int n, int m);
//
//void multiplicateByScal(int scal, int** matrix, int n, int m);
//
//void additionMatrix(int** matrixA, int nA, int mA, int** matrixB, int nB, int mB);
//
//int** transMatrix(int** matrix, int n, int m);
//
//void clear(int** matrix, int n, int m);


class Matrix
{
private:
	int length;
	int height;
	int** matrix = nullptr;
public:
	Matrix(int l, int h);
	~Matrix();

	
	void print();
	Matrix& multiScal(const int& scal);
	Matrix& add(const Matrix& m); 
	Matrix& transp();
	
};