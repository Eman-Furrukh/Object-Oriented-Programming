/*
 * temp.h
 *
 *  Created on: Apr 20, 2022
 *      Author: DELL
 */

#ifndef TEMP_H_
#define TEMP_H_

class Number {
	int size;
	float *arr;
public:
	Number();
	Number(int s);
	~Number();
	void storeNumber(int s);
	void displayArray(int s);
	float retrieveNumber(int s);
	float highest(int s);
	float lowest(int s);
	float average(int s);
};

#endif /* TEMP_H_ */
