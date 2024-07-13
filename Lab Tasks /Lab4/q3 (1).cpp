#include <iostream>
#include <cstdlib>
using namespace std;

void function(int ***&ptr, int p, int r, int c)
{
   ptr = new int **[p];
   for(int i=0; i<p;i++)
   {
      ptr[i] = new int *[r];
      for(int j=0; j<r; j++)
      { 
        ptr[i][j] = new int [c];
        for(int k=0; k<c; k++)
        {
          ptr[i][j][k] = rand()%10;
        }
      }
   }

//outputting the 3D array
  for(int i=0; i<p; i++)
  {
    for(int j=0;j<r;j++)
    {
       for(int k=0;k<c;k++)
         cout<<ptr[i][j][k]<<" ";
    }
    cout<<endl;
  }
  
//deallocating 
   for(int i=0; i<p; i++)
   {
     for(int j=0; j<r; j++)
     {
          delete[] ptr[i][j];

     }
     delete[] ptr[i];
   }
     delete[] ptr;
}

int main()
{
   int rows,coloumns,pages;
   
   cout<<"Enter the rows: ";
   cin>>rows;
   cout<<"Enter the coloumns: ";
   cin>>coloumns;
   cout<<"Enter the number of pages: ";
   cin>>pages;

   int ***array;
   function(array, pages, rows, coloumns);
   return 0;
}
