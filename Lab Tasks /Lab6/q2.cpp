#include <iostream>
using namespace std;
 

int row(int c, int n)
{
   
    if (n == 0)
        return c;
    cout<<(char)(c+64)<<" ";
    row(c+1,n-1);
}
 
void pattern(int line, int count, int num)
{
 
    if (line == 0)
        return;
    count = row(count, num);
    cout<<endl;
    pattern(line-1,count,num+1);
}
 
int main()
{
    int line = 5;
    pattern(line,1,1);
}
