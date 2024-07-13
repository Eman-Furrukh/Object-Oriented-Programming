#pragma once
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <string>
#include<iostream>
using namespace std;

class Polynomial
{
	//Data members
	int size; //size of array
	int* coefficient; //pointer to dynamic array
public:
	//default constructor
	Polynomial()
	{
		size = 10;
		coefficient = new int[size];
		for (int i = 0; i < size; i++)
			coefficient[i] = 0;
	}

	//parameterized constructor
	Polynomial(int s)
	{
		this->size = s;
		coefficient = new int[s + 1];
		for (int i = 0; i < this->size; i++)
			coefficient[i] = 0;
	}

	//copy constructor
	Polynomial(const Polynomial& p)
	{
		size = p.size;
		coefficient = new int[size + 1];
		for (int i = 0; i < size; i++)
			coefficient[i] = p.coefficient[i];
	}

	//assignment operator overloading
	Polynomial& operator=(const Polynomial& p)
	{
		this->size = p.size;
		this->coefficient = new int[size + 1];
		for (int i = 0; i < this->size; ++i)
			this->coefficient[i] = p.coefficient[i];
		return *this;
	}

	//equal to operator overloading
	bool operator==(const Polynomial& p)
	{
		for (int i = 0; i < size; i++)
			if (p.coefficient[i] != this->coefficient[i])
				return false;
		return true;
	}

	// + operator overloading
	Polynomial operator+(const Polynomial& p)
	{
		Polynomial temp;
		if (this->size > p.size)
			temp.size = this->size;
		else
			temp.size = p.size;

		for (int i = 0; i <= temp.size; i++)
			temp.coefficient[i] = this->coefficient[i] + p.coefficient[i];
		return temp;
	}

	// - operator overloading
	Polynomial operator-(const Polynomial& p)
	{
		Polynomial temp;
		if (this->size > p.size)
			temp.size = this->size;
		else
			temp.size = p.size;

		for (int i = 0; i <= temp.size; i++)
			temp.coefficient[i] = this->coefficient[i] - p.coefficient[i];
		return temp;
	}

	// += operator overloading
	void operator+=(const Polynomial& p)
	{
		Polynomial temp;
		if (this->size > p.size)
			temp.size = this->size;
		else
			temp.size = p.size;

		for (int i = 0; i <= this->size; i++)
			temp.coefficient[i] = this->coefficient[i] + p.coefficient[i];

	}

	// -= operator overloading
	void operator-=(const Polynomial& p)
	{
		Polynomial temp;
		if (this->size > p.size)
			temp.size = this->size;
		else
			temp.size = p.size;

		for (int i = 0; i <= this->size; i++)
			temp.coefficient[i] = this->coefficient[i] - p.coefficient[i];
	}

	operator string() const
	{
		string p;
		string str;
		for (int i = size; i >= 0; i--) {
			p = to_string(coefficient[i]) + "x^" + to_string(size);
			str += p;
		}
		return str;
	}

	//destructor
	~Polynomial() { delete[] coefficient; }

	// << operator overloading
	friend ostream& operator<<(ostream& out, const Polynomial& p);
	// << operator overloading
	friend istream& operator>>(istream& input, Polynomial& p);

};

// << operator overloading
ostream& operator<<(ostream& out, const Polynomial& p)
{
	for (int i = p.size; i >= 0; i--)
	{
		if (i == p.size || p.coefficient[i] < 0)
			out << p.coefficient[i] << "x^" << i << " ";
		else
			out << "+ " << p.coefficient[i] << "x^" << i << " ";
	}
	out << endl;
	return out;
}
// << operator overloading
istream& operator>>(istream& in, Polynomial& p)
{
	for (int i = 0; i <= p.size; i++)
	{
		cout << "Enter number for degree: " << i << " : ";
		in >> p.coefficient[i];
	}
	return in;
}

#endif // POLYNOMIAL_H
