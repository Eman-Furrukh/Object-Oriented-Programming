#include <iostream>
#include <cmath>
using namespace std;

int fun(int **p, int t, int s)
{
   int sum=0;
   cout<<"Enter Array: ";
   for(int i=0; i<t;i++)
   {
      for(int j=0;j<s;j++)
        cout<<p[i][j]<<" "<<endl;
   }

   for(int i=0; i<t; i++)
   {
      for(int j=0; j<s;j++)
      {
         if(i==0 || t==0 || i==t-1 || j==s-1)
            sum = sum + p[i][j];
      }
   }
   return sum;
}

int main()
{
  int t,s;
  cout<<"Enter the rows and columns: ";
  cin>>t>>s;

  int **p = new int *[t];
  for(int i=0; i<t;i++)
  {
    p[i] = new int[s];
    for(int j=0; j<s; j++)
        p[i][j] = rand()%10+1;
 
  }
  cout<<"Sum is: "<<fun(p,t,s);
}
