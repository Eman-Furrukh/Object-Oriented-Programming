#include <iostream>
using namespace std;

class Point {
      int x;
      int y;
   
   public:
   Point()
   {
      x = 0;
      y = 0;
   }
  
   Point(int x1, int y1)
   {
      x = x1;
      y = y1;
   }

   void setX(int x1)
   {
      x = x1;
   }
   void setY(int y1)
   {
      y = y1;
   }
   int getX()
   {
      return x;
   }
   int getY()
   {
      return y;			
   }

   ~Point()
   {
      cout<<"Destructer called.\n";
   }
};

int main()
{
   Point P1;
   P1.setX(5);
   P1.setY(3);
   cout<<"Coordinates for P1: ("<<P1.getX()<<","<<P1.getY()<<")\n";
   return 0;  
}
