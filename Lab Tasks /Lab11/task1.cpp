 
#include<iostream>
using namespace std;
class Money{
	public:
		int dollar;
		int cents;
		
		Money(){
			dollar=0;
			cents=0;
		}
		Money(int d,int c){
			dollar=d;
			cents=c;
		}
		void setdollar(int d){
			dollar=d;
		}
		void setcents(int c){

	
		cents = c;
		if (cents > 99)
		{
			int total = cents / 100;
			cents -= total * 100;
			dollar+= total;
		}
	}
		
		int getdollars(){
			return dollar;
		}
		void display(){
			cout<< dollar<<"  "<< cents<<endl;
		}	
		Money& operator= (const Money& right){
		
			this->dollar=right.dollar;
			this->cents=right.cents;
	            return *this;
		}
		bool operator== (const Money& right){
			if((this->dollar==right.dollar) && ( this->cents==right.cents)){
				return true;
			}
			else 
			return false;
		
		}
		Money& operator+= (const Money& right){
			 
        this->dollar = (this->dollar + right.dollar);
		 this->cents = (this->cents + right.cents);
        return *this;
    }
	Money& operator-= (const Money& right)
	{
			
			this->dollar = (this->dollar - right.dollar);
		 this->cents = (this->cents - right.cents);
        return *this;
    }
	

	
	Money& operator/= (const Money& right){
			this->dollar = (this->dollar * right.dollar);
		 this->cents = (this->cents * right.cents);
        return *this;
    }
	Money& operator*= (const Money& right){
			
		this->dollar = (this->dollar / right.dollar);
		 this->cents = (this->cents / right.cents);
        return *this;
    }
	
	
	~Money(){
		cout<<" destructor called ";
		}
	
	
};
int main(){

    Money right(7,4);
    Money right1(4,5);
    
right.display();
right1.display();

right1=right;
   right1.display();
     cout<<(right1==right)<<endl;
     cout<<endl;
     

	right+=right1;
	right.display();
	
	 right-=right1;
	 right.display();
	      
	right*=right1;
	 right.display();
       right/=right1;
	   right.display();
	 return 0;
     
     
     
     
}