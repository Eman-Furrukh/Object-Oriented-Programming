int value_search(int *arr[], int size, int value)
{
   for(int i=0; i<size; i++)
   {
     if(*arr[i] == value)
       return 1;    
   }
  
  return 0;
}
