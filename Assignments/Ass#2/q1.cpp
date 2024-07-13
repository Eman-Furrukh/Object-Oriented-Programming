#include <iostream>
using namespace std;

//find function
int find(int array[], int length, int target)
{
	if(length == 0)
		return -1;
	else
	{
		if(array[length] == target)
		    return length;               //length represents the index of array.
		else
		    find(array,length-1,target);
	}
}

int main()
{
	int arr[5];
	int finding;

	cout<<"Enter five values of array: \n";
	//entering array values
	for(int i=0;i<5;i++) 
	{
	   cin>>arr[i];
	}
	
	//outputting array values
	for(int i=0;i<5;i++) 
	{
	   cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Enter the target you want to find: ";
	cin>>finding;
	
	if(find(arr,5,finding) == -1)
		cout<<"Coulnd't be found.\n";
	else 			
		cout<<"Can be found at index: "<<find(arr,5, finding);	
					
	return 0;
}

