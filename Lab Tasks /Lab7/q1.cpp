#include <iostream>
using namespace std;

struct student
{
   string name;
   int age;
   int roll_no;
   string address;

   void printname()
   {
      cout<<name<<endl; 
   }

   void getage(int a)
   {
      if(age>=11 || age<=14)
         age = a;
      else
         cout<<"Invalid"<<endl;
   }

   void setage()
   {
      if(age==14)
        cout<<age<<endl;
   }

   void get_rollno()
   {
      if(roll_no%2==0) 
         cout<<roll_no<<endl;
   }
};

int main()
{
   int a;

   student s[3];
   for(int i=0; i<3; i++)
   {
      cout<<"Enter name: ";
      cin>>s[i].name;
      cout<<"Enter age: ";
      cin>>a;
      s[i].getage(a);
      cout<<"Enter roll number: ";
      cin>>s[i].roll_no;
   }

   for(int i=0; i<3; i++)
   {
      s[i].printname();
      s[i].setage();
      s[i].get_rollno();
   }
   return 0;
}

