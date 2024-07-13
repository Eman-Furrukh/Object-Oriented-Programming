#ifndef MATRIX_H
#define MATRIX_H

class Matrix{
	int row;
	int coloumn;
	int array;
public:
	Matrix();
	Matrix(int, int);
	Matrix(const Matrix &);
	operator[]();
	Matrix& operator=(const Matrix &); 
	Matrix& operator+(const Matrix &); 
	Matrix& operator-(const Matrix &); 
	Matrix& operator*(const Matrix &); 
	bool operator==(const Matrix &); 
	
	Matrix& operator+=(int);
	Matrix& operator-=(int);
	Matrix& operator*=(int);
	Matrix& operator/=(int);
	Matrix& operator()(int A, int B);
	~Matrix();
};

	ostream& operator<<(ostream&, const Matrix &); 
	istream& operator>>(istream&, const Matrix &); 

#endif

