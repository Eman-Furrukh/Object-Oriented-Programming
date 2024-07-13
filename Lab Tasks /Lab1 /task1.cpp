#include <iostream>
using namespace std;

void swap(int *n1, int *n2)
{
   int temp;
   temp = *n1;
   *n1 = *n2;
   *n2 = temp;
}

int main()
{  
   int num1, num2;
   cout<<"Enter two numbers: ";
   cin>>num1>>num2;
   
   swap(&num1,&num2);
   cout<<num1<<endl;
   cout<<num2<<endl;
   return 0;
}



