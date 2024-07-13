#include <iostream>
using namespace std;

//function to add even and odd numbers
void sum(int **array, int row, int coloumn, int &evenSum, int &oddSum)
{                 
	if(array[row][coloumn] % 2 == 0)
	    evenSum += array[row][coloumn];
	else 
	    oddSum += array[row][coloumn];

	if(coloumn > 0)
	    sum(array,row,coloumn-1,evenSum,oddSum);
	else if(row > 0)
	{
		row -= 1;
		coloumn = 2;
		sum(array,row,coloumn,evenSum,oddSum);
	}	
}

int main()
{
	int evenSum = 0;
	int oddSum = 0;
	
	//allocating 
	int **matrix = new int* [3];
	for(int i=0;i<3;i++)
	   matrix[i] = new int [3];
	   
	//initialising values of matrix
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter a value: ";
			cin>>matrix[i][j];		
		}
	}
	cout<<endl;
	
	//print the matrix
	cout<<"Array: \n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
 		cout<<endl;
	}
	cout<<endl;
	
	sum(matrix,2,2, evenSum, oddSum);
	
	cout<<"Sum of even numbers is: "<<evenSum<<endl;
	cout<<"Sum of odd numbers is: "<<oddSum<<endl;	
	return 0;
}
