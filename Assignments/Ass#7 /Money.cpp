class Money
{
    // think about the private data members
public:
    Money();    // default constructor
    Money(double); // parameterized constructor

    // Implement getters and setter functions

    Money operator+(Money m);   //
    Money operator-(Money m);   //
    Money operator+(Dollar d);  //
    Money operator-(Dollar d);  //
    Money operator+(Nickel d);  //
    Money operator-(Nickel d);  //
    Money operator+(Quarter d); //
    Money operator-(Quarter d); //
    Money operator+(Cent d);    //
    Money operator-(Cent d);    //
    // These are all addition and subtraction on overloads to add specific coins to the total
    // amount of money

    Money operator++(); // Round up the current amount of money to the nearest quarter
    Money operator--(); // Round down the current amount of money to the nearest quarter

    Bool operator>=();
    Bool operator<=();
    //Comparison operators
	Quarters operator!() 

	//Returns the maximum number of quarters that can be obtained from Money
	Nickels operator~()

	//Returns the maximum number of nickels that can be obtained from Money	

	Money operator/(int n) 

	//Returns the money object created if the current money amount were divided into n parts

	Money operator*(int n) 
	//Returns the money object created by multiplying the current total amount by n

};
