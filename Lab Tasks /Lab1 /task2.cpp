#include <iostream>
using namespace std;


int find_max(int *ptr[])
{  
   int max = -99999;
   for(int i=0; i<7; i++)
   {
     if(*ptr[i] > max)
       max = *ptr[i];
   }
  
   return max;
}


int main()
{
   int arr[7];
   for(int i=0; i<7; i++)
   {
      cout<<"Enter a value: ";
      cin>>arr[i]; 
   }
   cout<<"The largest value is: "<<find_max(arr)<<endl;
   return 0;
}

