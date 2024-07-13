/*
 * temp.h
 *
 *  Created on: Apr 20, 2022
 *      Author: DELL
 */

#ifndef TEMP_H_
#define TEMP_H_

class Array {
    int *arr;
    int s;
public:
    Array();
    Array(int size);
    Array(int *arr, int size);
    Array(const Array &);
    int getAt(int i);
    void setAt(int i, int val);
    Array subArr(int pos, int siz);
    Array subArr(int pos);
    int * subArrPointer(int pos, int siz);
    int * subArrPointer(int pos);
    void push_back(int a);
    void pop_back();
    int insert(int idx, int val);
    int erase(int idx, int val);
    void Size();
    int length();
    void clear();
    int value(int idx);
    void assign(int idx, int val);
    void copy(const Array& Arr);
    void copy(const int * arr, int siz);
    void display();
    bool isEmpty();
    Array find(int);
    bool equal(Array);
    int sort();
    void reverse();
    ~Array();
};

#endif /* TEMP_H_ */
