#include <iostream>
using namespace std;

//function that outputs if matrices are equal or not
int equal(int **matrix1, int** matrix2, int row, int coloumn)
{  
	if(row<0)
	{
		row = 2;            
		coloumn -= 1;
	}
	if(coloumn<0)
	   return 1;
	
	if(matrix1[row][coloumn] == matrix1[row][coloumn])
	    return equal(matrix1,matrix2,row-1,coloumn);
	else
		return 0; 
}

int main()
{ 
//following is for the first matrix
    //allocating
	int** matrix1 = new int* [3];
	for(int i=0;i<3;i++)
	{
		matrix1[i] = new int[3];
	}

    //initialising
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter a value for Matrix 1: ";
			cin>>matrix1[i][j];
		}
	}
	cout<<endl;
	
//following is for the second matrix
	//allocating
	int** matrix2 = new int* [3];
	for(int i=0;i<3;i++)
	{
		matrix2[i] = new int[3];
	}
	
	//initialising
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter a value for Matrix 2: ";
			cin>>matrix2[i][j];
		}
	}
	cout<<endl;
	
//outputting both matrices 
	cout<<"Matrix 1: \n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		   cout<<matrix1[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"Matrix 2: \n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		   cout<<matrix2[i][j]<<" ";
		cout<<endl;
	}	
	cout<<endl;
	
	equal(matrix1,matrix2,3,3);

	return 0;
}
