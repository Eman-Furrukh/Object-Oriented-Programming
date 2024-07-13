/*
 * temp.h
 *
 *  Created on: Apr 27, 2022
 *      Author: administrator
 */

#ifndef TEMP_H_
#define TEMP_H_
#include <string>

class BankAccount {
	char Depositorname [20];
	char AccountName[20];
	long int balance;
public:
	void Initialize(char dp_name, char acc_num, long balance);
	bool depositAmount(long amountToDeposit);
	bool withdrawAmount(long amountToWithdraw);
    long getAmount();
};

#endif /* TEMP_H_ */
