#pragma once
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
using namespace std;

class Invoice {
	char* partNum;
	char* partDesc;
	int quantity;
	float pricePerItem;
public:
	//default constructors
	Invoice() {
		partNum = '\0';
		partDesc = '\0';
		quantity = 0;
		pricePerItem = 0.0;
	}
	//parameterised constructor
	Invoice(char* pN, char* pD, int q, float pPI) {
		partNum = pN;
		partDesc = pD;
		if (q < 0)
			quantity = 0;
		else
			quantity = q;

		if (pPI < 0.0)
			pricePerItem = 0.0;
		else
			pricePerItem = pPI;
	}
	// setters 
	void setpartNum(char* pN)
	{
		partNum = pN;
	}
	void setPartDesc(char* pD)
	{
		partDesc = pD;
	}
	void setQuantity(int q)
	{
		quantity = q;
	}
	void setPricePerItem(float pPI)
	{
		pricePerItem = pPI;
	}

	//getters
	char* getPartNum()
	{
		return partNum;
	}
	char* getPartDesc()
	{
		return partDesc;
	}
	int getQuantity()
	{
		return quantity;
	}
	float getPricePerItem()
	{
		return pricePerItem;
	}

	float getInvoiceAmount() {
		float amount;
		/*if (quantity < 0)
			quantity = 0;
		if (pricePerItem < 0)
			pricePerItem = 0;*/
		amount = quantity * pricePerItem;
		return amount;
	}

	//destructor
	~Invoice() {
		cout << "Destructor called.";
	}
};

#endif // !HEADER_H_
