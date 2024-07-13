/*
 * temp.cpp
 *
 *  Created on: Apr 27, 2022
 *      Author: administrator
 */

#include "temp.h"
#include <iostream>
#include <string>
using namespace std;

void BankAccount::Initialize(char dp_name, char acc_num, long balance) {
	cout<<"Enter Name: ";
	cin>>dp_name;
	cout<<"Account Name: ";
	cin>>acc_num;
	cout<<"Enter balance: ";
	cin>>balance;
}

bool BankAccount::depositAmount(long amountToDeposit) {
	cout<<"Enter how much you want to deposit? ";
	cin>>amountToDeposit;

	balance += amountToDeposit;
	 if(amountToDeposit <= 0)
		 return false;
	 else
		 return true;
	 cout<<"Balance is now "<<balance<<endl;
}

bool BankAccount::withdrawAmount(long amountToWithdraw) {
   cout<<"How much do you want to withdraw? ";
   cin>>amountToWithdraw;

   if(amountToWithdraw < balance)
   {
	   balance -= amountToWithdraw;
	   return true;
   }
   else
	   return false;
   cout<<"Balance is now "<<balance<<endl;
}

long BankAccount::getAmount() {
	return balance;
}


