#include<iostream>
using namespace std;

class Matrix
{
    int a[3][3];
public:
	void set()
	{
        cout<<"\n Enter Matrix Element (3 X 3) : \n";
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cout<<" ";
                        cin>>a[i][j];
                }
        }
	}
	void display()
	{
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<a[i][j]<<"\t";
                }
                cout<<"\n";
        }
	}
	void operator +(Matrix x)
	{
        int mat[3][3];
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        mat[i][j]=a[i][j]+x.a[i][j];
                }
        }
        cout<<"\n Addition of Matrix : \n\n";
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
        }
	}
};

int main()
{
    Matrix a1,a2;
    a1.set();      
    a2.set();      
    cout<<"\n First Matrix : \n\n";
    a1.display();  
    cout<<"\n Second Matrix : \n\n";
    a2.display(); 
    m+n;        
    return 0;
}
