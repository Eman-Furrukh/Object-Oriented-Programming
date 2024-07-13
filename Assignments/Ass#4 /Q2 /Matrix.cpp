#include "Matrix.h"
#include <iostream>
#include <ostream>
#include <istream>
#include <stdlib.h>
using namespace std;

// a default constructor
Matrix::Matrix() {
	row = coloumn = 0;
	array = new int [row][coloumn];
}

// a parametrized constructor
Matrix::Matrix(int r, int c, int a) {
	r = row;
	c = coloumn;
	a = array;
}

/*
// copy constructor
Matrix::Matrix(const Matrix &obj);    */

//set and get value at (i,j)
Matrix::void operator[](int r, int c,int a) {
	for(int i=0;i<r;i++)
	{
		for(int j=0;i<c;j++)
		{
			cout<<"Enter a number: ";
			cin>>a[i][j];
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;i<c;j++)
		    cout<<a[i][j]<<" ";
	    cout<<endl;
	}
	cout<<endl;
}

//assigns matrix on RHS to the one on LHS
Matrix::Matrix& operator=(const Matrix &obj) {
	Matrix temp = new Matrix[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			temp[i][j] = this->a[i][j];
			a[i][j] = obj.a[i][j];
			obj.a[i][j] = temp[i][j];
		}
	}
}

//add two matrices
Matrix::Matrix& operator+(const Matrix &obj) {
	Matrix sum = new Matrix[r][c];
	if(this->a[r] != obj.a[r])
		cout<<"Error.";
	else
	{
		for(int i=0;i<r;i++)
		{
			for(int j=0;i<c;j++)
			{
				sum[i][j] = this->a[i][j] + obj.a[i][j];
				cout<<sum[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return sum;
}

//subtracts two matrices
Matrix::Matrix& operator-(const Matrix &obj) {
	Matrix sub = new Matrix[r][c];
	if(this->a[r] != obj.a[r])
		cout<<"Error.";
	else
	{
		for(int i=0;i<r;i++)
		{
			for(int j=0;i<c;j++)
			{
				sub[i][j] = this->a[i][j] - obj.a[i][j];
				cout<<sub[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return sub;
}

//dot product of two matrices
Matrix::Matrix& operator*(const Matrix &obj) {
	Matrix mult = new Matrix[r][c];
	if(this->a[r] != obj.a[r])
		cout<<"Error.";
	else
	{
		for(int i=0;i<r;i++)
		{
			for(int j=0;i<c;j++)
			{
				mult[i][j] += this->a[i][j] * obj.a[i][j];
				cout<<mult[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return mult;
}

//checks if two matrices are equal
Matrix::bool operator==(const Matrix &obj) {
	bool flag;
	if(this->a[r][c] == obj,a[r][c])
	{
		for(int i=0;i<r;i++)
		{
			for(int j=0;i<c;j++)
			{
				if(this->a[i][j] == obj.a[i][j])
					flag = true;
				else
					flag = false;
			}
		}
	}
	else 
		flag = false;
}

//adds an integer to all elements
Matrix::Matrix& operator+=(int i) {
	for(int i=0;i<r;i++)
	{
		for(int j-0;j<c;j++)
			a[i][j] += i;
	}
	return a;
}

//subtracts an integer from all elements
Matrix::Matrix& operator-=(int i) {
	for(int i=0;i<r;i++)
	{
		for(int j-0;j<c;j++)
			a[i][j] -= i;
	}
	return a;
}

//multiples an integer to all elements
Matrix::Matrix& operator*=(int i) {
	for(int i=0;i<r;i++)
	{
		for(int j-0;j<c;j++)
			a[i][j] *= i;
	}
	return a;
}

//divides all elements by an integer
Matrix::Matrix& operator/=(int) {
	for(int i=0;i<r;i++)
	{
		for(int j-0;j<c;j++)
			a[i][j] /= i;
	}
	return a;
}

//returns a new matrix of size A x B
Matrix::Matrix& operator()(int A, int B) {
	cout<<"Enter the size of matrix: ";
	cin>>A>>B;
	arr = new Matrix[A][B];
	for(int i=0;i<A;i++)
	{
		for(int j=0;j<B;j++)
		{
		    arr[i][j] = rand() % 10;		   
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

//deconstructor
~Matrix::Matrix() {
	delete [] a [];
	delete [] a;
}

//output matrix
ostream& operator<<(ostream& out, const Matrix &obj) {
	out<<obj.a[r][c];
	return out;
} 

//inputs matrix
istream& operator>>(istream& in, const Matrix &obj) {
	in>>obj.a[r][c];
	return in;
}
