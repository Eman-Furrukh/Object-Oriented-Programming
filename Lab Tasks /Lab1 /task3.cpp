
int *reverseArray(int arr[])
{
   int temp, j = 4;
   for(int i=0; i<j; i++, j--)
   {
     temp= arr[i];
     arr[i]= arr[j];
     arr[j] = temp;
   }

   return arr;
}
