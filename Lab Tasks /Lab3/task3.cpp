#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fun(int s)
{
   int **p = new int*[4];
   for(int i=0; i<s;i++)
   {
      p[i] = new int [s];
   }
   
   srand(time(0));
   
   for(int i=0; i<5; i++)
   {
      for(int j=0; j<s; j++)
          p[i][j] = rand()%10+1;      
   }

   for(int i=0; i<s; i++)
   {
      int max = p[i][0];
      for(int j=0; j<s; j++)
      {
         if(max < p[i][j])
            max = p[i][j];
      }
   }
   

   for(int i=0;i<5;i++)
   {
      delete [] p[i];
      delete [] p;
   }
}

int main()
{
   int array;
   cout<<"Enter array coloumn: ";
   cin>>array;
   cout<<"Maximum value is: ";
   fun(array);
   return 0;
}
