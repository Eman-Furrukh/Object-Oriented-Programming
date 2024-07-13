#include <iostream>
using namespace std;

int find(int arr[], int length, int target) 
{
   if(length == 0)
      return 0;
   else
   {
      if(arr[length] == target)
         return length;
   }
   return find(arr, length - 1, target);
}

int main() 
{
   int array[] = {19,33,22,7};
   int target = 22;
   int x = find(array,4,target);
   
   cout << "Search Number found: "<<x<<endl;
   return 0;
}







