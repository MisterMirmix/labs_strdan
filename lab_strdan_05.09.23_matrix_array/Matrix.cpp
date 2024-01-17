//#include "Matrix.h"
//
//////int** init(int n, int m)
//////{
//////	std::cout << "init matrix size(" << n << ", " << m << ")\n";
//////	int** matrix = new int* [n];
//////	for (int i = 0; i < n; ++i)
//////	{
//////		matrix[i] = new int[m];
//////		for (int j = 0; j < m; ++j)
//////		{
//////			matrix[i][j] = i + j;
//////		}
//////	}
//////	return matrix;
//////}
//////
////////void print(int** matrix, int n, int m)
////////{
////////	std::cout << "print matrix size(" << n << ", " << m << ")\n";
////////	for (int i = 0; i < n; ++i)
////////	{
////////		for (int j = 0; j < m; ++j)
////////		{
////////			std::cout << matrix[i][j] << '\t';
////////		}
////////		std::cout << '\n';
////////	}
////////}
//////
//////void multiplicateByScal(int scal, int** matrix, int n, int m)
//////{
//////	std::cout << "multiplication matrix size(" << n << ", " << m << ") by " << scal <<  '\n';
//////	for (int i = 0; i < n; ++i)
//////	{
//////		for (int j = 0; j < m; ++j)
//////		{
//////			matrix[i][j] *= scal;
//////		}
//////	}
//////}
//////
//////void additionMatrix(int** matrixA, int nA, int mA, int** matrixB, int nB, int mB)
//////{
//////	if (nA == nB && mA == mB)
//////	{
//////		std::cout << "addition matrix" << '\n';
//////		for (int i = 0; i < nA; ++i)
//////		{
//////			for (int j = 0; j < mA; ++j)
//////			{
//////				matrixA[i][j] += matrixB[i][j];
//////			}
//////		}
//////	}
//////	else
//////	{
//////		std::cout << "addition is not possible!" << '\n';
//////	}
//////}
//////
//////int** transMatrix(int** oldMatrix, int n, int m)
//////{
//////	std::cout << "transp matrix size(" << n << ", " << m << ")\n";
//////	int** newMatrix = init(m, n);
//////	for (int i = 0; i < n; ++i)
//////	{
//////		for (int j = 0; j < m; ++j)
//////		{
//////			newMatrix[j][i] = oldMatrix[i][j];
//////		}
//////	}
//////	return newMatrix;
//////}
//////
//////
//////void clear(int** matrix, int n, int m)
//////{
//////	std::cout << "clear matrix size(" << n << ", " << m << ")\n";
//////	for (int i = 0; i < n; ++i)
//////	{
//////		delete matrix[i];
//////	}
//////	delete matrix;
//////}
//
//Matrix::Matrix(int l, int h) : length(l), height(h)
//{
//	std::cout << "matrix initialized\n";
//	matrix = new int* [h];
//	for (int i = 0; i < h; i++)
//	{
//		matrix[i] = new int[l];
//		for (int j = 0; j < l; j++)
//		{
//			matrix[i][j] = i + j;
//		}
//	}
//}
//
//Matrix::~Matrix()
//{
//	std::cout << "matrix cleared\n";
//	for (int i = 0; i < height; ++i)
//	{
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//void Matrix::print()
//{
//	for (int i = 0; i < height; ++i)
//	{
//		for (int j = 0; j < length; ++j)
//		{
//			std::cout << matrix[i][j] << '\t';
//		}
//		std::cout << '\n';
//	}
//}
//
//Matrix& Matrix::multiScal(const int& scal)
//{
//	for (int i = 0; i < height; ++i)
//	{
//		for (int j = 0; j < length; ++j)
//		{
//			matrix[i][j] *= scal;
//		}
//	}
//	return *this;
//}
//
//Matrix& Matrix::add(const Matrix& m)
//{
//	for (int i = 0; i < height; ++i)
//	{
//		for (int j = 0; j < length; ++j)
//		{
//			matrix[i][j] += m.matrix[i][j];
//		}
//	}
//	return *this;
//}
