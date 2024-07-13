#include <iostream>
#include <cmath>
using namespace std;

void magicSquare(int num, int num1)
{
	//allocating
	int **arr = new int* [num];
	for(int i=0;i<num1;i++)
	  int *arr[i] = new int [num1];
	
	//initialising position of 1
	int i = num / 2;
	int j = num + 1;
	
	for (int n=1; n<=num*num;)
	{
		//index starts with 0 so j can't = n and i can't be negative 
        if(i == -1 && j == num) 
        {
            j = num - 2;
            i = 0;
        }
        else
		{
            if(j == num)
              j = 0;
                
            if(i < 0)
              i = num - 1;
        }
        
        if(arr[i][j]) 
        {
            j -= 2;
            i++;
            continue;
        }
        else
            arr[i][j] = n++; 
 
        j++;
        i--; 
    }
 
    int constant = num * ((pow(num,2)) + 1) / 2;
    
    //outputting the square
	cout<<"Sum of each row and coloumn is: "<<constant<<endl;
    for(i=0; i<num; i++)
	{
        for(j=0; j<num; j++)
            cout<<arr[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;

    //deallocating 
    for(i=0; i<num; i++)
	{
        for(j=0; j<num; j++)
            delete[] arr[i];
    }
    delete[] arr;
    cout<<endl;
}

int main()
{
	int n;
	cout<<"Enter dimension (n x n) of matrix: ";
	cin>>n;	
	int m = n;
	magicSquare(n,m);
	return 0;
}

