#include <iostream>
#include <string>
using namespace std;

class electricityBill {
     string custName;
     int custNum;
     int unit;
public:
    electricityBill()
    {
	custName = 0;
    }

    electricityBill(string n, int c_num, int u)
    {
        custName = n;	
	custNum = c_num;
	unit = u;
	counter++;
	serial = counter;
    }

    electricityBill(const electricityBill& a)
    {
        custName = a.unit;	
	custNum = a.c_num;
	unit = a.unit;
	counter++;
	serial = counter;
    } 

    int count()
    {
        return counter;
    }

    void input()
    {
        cout<<"Name: ";
        cin>>custName;
	cout<<"Number: ";
        cin<<c_num;
	cout<<"Units: ";
	cin>>unit;
    }

    void bill()
    {
 	cout<<"Units Price: 9 ";
	cout<<"Total Bill: "<unit*9<<endl;
    }

    bool operator=(const electricityBill& a)
    {
 	if(((custName != a.custName)&&(c_num != a.c_num)&&(u != a.unit)))
	    return false;
        return true;
    }

    void display() 
    {
	cout<<serial<<custName<<endl;
	cout<<c_num<<endl;
    }
};

int main() {
    electricityBill b;
    b.input();
    b.display();
    return 0;
}


