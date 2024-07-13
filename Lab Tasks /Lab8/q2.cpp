#include <iostream>
#include <cmath>
using namespace std;

class Cube {
   int sides;
   
   public:
   Cube()
   {
      sides = 0;
   }

   Cube(int s)
   {
      sides = s;
   }

   void setSides(int s)
   {
      sides = s;
   }

   int getSides()
   {
      return sides;
   }
 
   int getVol()
   {
      return pow(sides,3);
   }

   ~Cube()
   {
      cout<<"Destructer called.\n";
   }
};

int main()
{
   Cube c;
   c.setSides(3);
   cout<<"Volume of Cube is: "<<c.getVol()<<"m^3.\n";
   return 0;
} 
