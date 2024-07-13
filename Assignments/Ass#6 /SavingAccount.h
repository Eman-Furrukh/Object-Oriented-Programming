#ifndef SAVING_ACCOUNT_H_
#define SAVING_ACCOUNT_H_

#include <iostream>
#include<string>
using namespace std;

struct SavingAccount
{
    char* name;
    float annualInterestRate;
    double savingBalance;
    char* accountNum;
};

//      MEMBER FUCNTIONS START FROM HERE:       //

//a function to create a new accountand assign it an account number.
void OpenCustomerAccount(SavingAccount* savers[], int& accountsOpen, char* NameVal, double balance)
{
    savers[accountsOpen] = new SavingAccount;
    savers[accountsOpen]->name = NameVal;
    savers[accountsOpen]->savingBalance = balance;
    savers[accountsOpen]->accountNum = new char[5];
    savers[accountsOpen]->accountNum[0] = 'S';
    savers[accountsOpen]->accountNum[1] = 'A';
    savers[accountsOpen]->accountNum[2] = '0' + accountsOpen / 10;
    savers[accountsOpen]->accountNum[3] = '0' + accountsOpen % 10;
    savers[accountsOpen]->accountNum[4] = '\0';
    accountsOpen++;
}

//that calculates the monthly interest by multiplying the balance by annualInterestRate divided by 12
float calculateMonthlyInterest(SavingAccount* saver)
{
    return saver->savingBalance * saver->annualInterestRate / 12;
}

//modifies the interest rate according to a new value.
void modifyInterestRate(SavingAccount* saver, float newValue)
{
    saver->annualInterestRate = newValue;
}

/* a function that searches for an account using an account number.
   If the customer is found it returns the array
   index otherwise return -1  */
int SearchCustomer(SavingAccount* savers[], int accountsOpen, char* accountNum)
{
    int i = 0;
    while (i < accountsOpen) {
        if (strcmp(savers[i]->accountNum, accountNum) == 0)
            return i;
        else
            return -1;
        i++;
    }
}

//a function that updates a customer’s balance
bool UpdateAccountBalance(SavingAccount* savers[], int accountsOpen, char* accountNumVal, double balanceVal)
{
    // int index = SearchCustomer(savers, accountsOpen, accountNumVal);
    if (accountsOpen == -1)
        return false;
    savers[accountsOpen]->savingBalance = balanceVal;
    return true;
}

#endif // !SAVING_ACCOUNT_H_
