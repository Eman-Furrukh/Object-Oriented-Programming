#include<iostream>
#include<cstring>

using namespace std;

int fac()
{
//write your code here for task 1a
int factorial(int f)
{
   int fact=1;
   for(int i=1; i<=f; i++)
   {  
      fact = fact * i; 
   }
   return fact;
}

int main()
{
   int num;
   cout<<"Enter a number you want to take factorial of: ";
   cin>>num;

   cout<<"The factorial is: "<<factorial(num)<<endl;
 
   return 0;
}

}

int facWithRecursion(int n)
{

//write your code here for task 1b
int factorial(int n)
{ 
  if((n==0) || (n==1))
    return 1;
  else
    return n*factorial(n-1);
}

int main()
{
  int num;
  cout<<"Enter the number you want to take factorial of: ";
  cin>>num;

  cout<<"The factorial is: "<<factorial(num)<<endl;
  return 0;
}

}

int CountOnes(int n)
{
//write your code here for task 2a
int CountOnes(int n)
{
   
}

int main()
{
  int binary;
  cout<<"Enter binary number: "; 
  cin>>binary;

  cout<<"The number of 1's is: "<<CountOnes(binary)<<endl;
  return 0;
}
}

int countWithRecursion(int n)
{
//write your code here for task 2b
}

int FindSum(int n)
{
//write your code here for task 3a
int FindSum(int n)
{
   int sum = 0;
   for(int i=0; i<=n; i++)
   {
      sum = sum + i;
   }
   return sum;
}

int main()
{
   int num;
   cout<<"Enter number: ";
   cin>>num;

   cout<<"The sum from 1 to "<<num<<" is: "<<FindSum(num);
   cout<<endl;
   return 0;
}
}

int FindSumWithRecursion(int n)
{
//write your code here for task 3b
}

int decimalToOctal(int n)
{
//write your code here for task 4a
}

int decimalToOctalWithRecursion(int n)
{
//write your code here for task 4b
}
