#include<iostream>
using namespace std;

void printChars(char ch, int n)
{
   if(n==0)
      return;
   else
   {
      cout<<ch;
      printChars(ch,n-1);
   }
}

void printPattern(int n)
{
   if(n==0)
      return;
   else
   {
      printChars('*',n);
      cout<<endl;
      printPattern(n-1);
      printChars('*',n);
      cout<<endl;
   }
}

int main()
{
   printPattern(5);
   return 0;
}
