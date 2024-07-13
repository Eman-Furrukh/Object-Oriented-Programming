#include "q2.cpp"
#include <gtest/gtest.h>

TEST(sum,r1) { 
    int rows=2;
    int col=3;
	
	int **a1 = new int*[rows];
	
	for (int i = 0; i < rows; i++)
	{
		a1[i] = new int[col];
	}
	
	for (int i = 0; i < rows; i++)
	{
		for( int j = 0; j < col; j++)
		{
			
			a1[i][j]=i*2;	
		}
	
	}
	
	int **a2 = new int*[rows];
	
	for (int i = 0; i < rows; i++)
	{
		a2[i] = new int[col];
	}
	
	for (int i = 0; i < rows; i++)
	{
		for( int j = 0; j < col; j++)
		{
			
			a2[i][j]=i*4;	
		}
	
	}
	int s=0;
	
	
	int** arr=sum(a1,a2,col,rows);
    for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++){
		    s+=arr[i][j];
		}
	}
    ASSERT_EQ(18,s) ;

}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
