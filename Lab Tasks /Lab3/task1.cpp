#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void square(int *&p, int s)
{
  p = new int [s];
  srand(time(0));
  cout<<"The array values are: ";

  for(int i=0; i<s; i++)
  {
     *(p+i) = rand()% 10+1;
     cout<<*(p+i)<<" ";
  }
  cout<<endl;

  for(int i=0; i<s; i++)
    *(p+i)  = *(p+i) * *(p+i) ; 
}

int main()
{
  int size;  
  cout<<"Enter the number of elements of array: ";
  cin>>size;

  int *num;
  cout<<endl;
  
  square(num,size);
  cout<<"Squaring the values gives you: ";
  for(int i=0; i<size; i++)
  {
   
     cout<<*(num+i) <<" "<<endl;
  }
  return 0;
}

