#pragma once

#ifndef MATRIX_H_
#define MATRIX_H_

#include <iostream>
using namespace std;

class Matrix {
	int rows;
	int cols;
	int** arr;
public:
	// a default constructor
	Matrix() {
		rows = 3;
		cols = 3;
		arr = new int* [rows];
		for (int i = 0; i < rows; i++) 
			arr[i] = new int[cols];
	}
	//Parameterized constructor
	Matrix(int r, int c) {
		rows = r;
		cols = c;
		arr = new int* [rows];
		for (int i = 0; i < rows; i++) {
			arr[i] = new int[cols];
			for (int j = 0; j < cols; j++)
				arr[i][j] = 0;
		}

	}
	// copy constructor
	Matrix(const Matrix& a) {
		rows = a.rows;
		cols = a.cols;
		arr = new int* [rows];
		for (int i = 0; i < rows; i++) {
			arr[i] = new int[cols];
			for (int j = 0; j < cols; j++)
				arr[i][j] = 0;
		}
		for (int i = 0; i < a.rows; i++) {
			for (int j = 0; j < cols; j++)
				arr[i][j] = a.arr[i][j];
		}
	}

	//setter
	void set(int i, int j, float val) {
		if (i < rows && j < cols) 
			arr[i][j] = val;
	}
	//getter
	float get(int i, int j)const {
		if (i < rows && j < cols) 
			return arr[i][j];
	}

	//assigns and then copies the matrix
	Matrix& assign(const Matrix a2) {
		rows = a2.rows;
		cols = a2.cols;
		arr = new int* [rows];
		for (int i = 0; i < rows; i++) {
			arr[i] = new int[cols];
			for (int j = 0; j < cols; j++)
				arr[i][j] = 0;
		}
		for (int i = 0; i < a2.rows; i++) {
			for (int j = 0; j < cols; j++) 
				arr[i][j] = a2.arr[i][j];
		}
		return *this;
	}

	//adds two Matrices 
	Matrix add(const Matrix a3) {
		Matrix temp;
		if (this->rows == a3.rows && this->cols == a3.cols) {
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < cols; j++) 
					temp.arr[i][j] = arr[i][j] + a3.arr[i][j];
			}
		}
		return temp;
	}

	//subtracts two Matrices
	Matrix subtract(const Matrix a4) {
		Matrix temp;
		if (this->rows == a4.rows && this->cols == a4.cols) {
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < cols; j++) 
					temp.arr[i][j] = arr[i][j] - a4.arr[i][j];
			}
		}
		return temp;
	}

	//multiplies two Matrices
	Matrix multiply(const Matrix a5) {
		Matrix temp;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				for (int k = 0; k < cols; k++)
					temp.arr[i][j] += this->arr[i][k] * a5.arr[k][j];
			}
		}
		return temp;
	}

	//Element kay tor pe two matrices ko multiply krta hai
	Matrix multiplyElement(const Matrix a6) {
		Matrix temp;
		if (this->rows == a6.rows && this->cols == a6.cols) {
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < cols; j++) 
					temp.arr[i][j] = arr[i][j] * a6.arr[i][j];
			}
		}
		return temp;
	}

	//assigns a value to each element
	Matrix add(float val) {
		Matrix temp;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) 
				temp.arr[i][j] = arr[i][j] + val;
		}
		return temp;
	}

	//multiplies each element with a value
	Matrix multiply(float val) {
		Matrix temp;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) 
				temp.arr[i][j] = arr[i][j] * val;
		}
		return temp;
	}

	// user input for matrix
	void input() {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cout << "Enter element: ";
				cin >> arr[i][j];
			}
		}
	}

	// outputs matrix
	void display() {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) 
				cout << arr[i][j] << " ";
			cout << endl;
		}
	}

	//destructor
	~Matrix() {
		delete[] arr;
	}
};

#endif // !MATRIX_H_
