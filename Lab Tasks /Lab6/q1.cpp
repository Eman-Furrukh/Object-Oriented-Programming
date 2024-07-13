
#include <iostream>
#include <string>
using namespace std;

//function prototype
void RemDuplicate(char *,int);

int main()
{
    char line[40];
    cout<<"Enter a line of string :";
    cin.getline(line,40);
    RemDuplicate(line,0);
    cout<<endl;
    return 0;
}

//function to remove duplicates
void RemDuplicate(char* ch,int l)
{
    if(ch[l]=='\0')
       return;
	
    if(ch[l]==ch[l+1] && ch[l]!=ch[l-1])
    {
       cout<<ch[l];
       l+1;
    }
    else if (ch[l]!=ch[l+1] && ch[l]!=ch[l-1])
        cout<<ch[l];
    RemDuplicate(ch,l+1);
}
