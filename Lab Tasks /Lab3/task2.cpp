#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int fun(int *arr[])
{  
   int max = -999999;
   int *a = new int;
   int *b = new int;
   int *c = new int;
   int *d = new int;
   
   arr[0] = a;
   arr[1] = b;
   arr[2] = c;
   arr[3] = d; 
 
   srand(time(0));
   for(int i=0;i<4;i++)
   {
      *arr[i] = rand()%10;
      if(*arr[i] > max)
         max = *arr[i];
   }
   return max;
}

int main()
{
   int *p[4];
   int max;
   max = fun(p);

   for(int i=0;i<4;i++)
   {
      cout<<*p[i]<<endl;
   }
   cout<<"Maximum number is: "<<max<<endl;
   return 0;
}
