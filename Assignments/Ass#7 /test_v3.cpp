#include "BigInt.cpp"
#include "Polynomial.cpp"
#include "Flower.cpp"
#include "Bouquet.cpp"
#include "Money.cpp"
#include "Date.cpp"
#include <string.h>
#include <gtest/gtest.h>

// Q1: Money

TEST(Money, Constructors){

	Money m1();

	ASSERT_EQ(0, m1.getDollars());
	ASSERT_EQ(0, m1.getQuarters());
	ASSERT_EQ(0, m1.getNickels());
	ASSERT_EQ(0, m1.getCents());

	Money m2(5.46);

	ASSERT_EQ(5, m2.getDollars());
	ASSERT_EQ(1, m2.getQuarters());
	ASSERT_EQ(4, m2.getNickels());
	ASSERT_EQ(1, m2.getCents());

}

TEST(Money, AdditionSubtractionMoney){

	Money m1(2.04);
	Money m2(1.67);

	m1 = m1 + m2;

	ASSERT_EQ(3, m1.getDollars());
	ASSERT_EQ(2, m1.getQuarters());
	ASSERT_EQ(4, m1.getNickels());
	ASSERT_EQ(1, m1.getCents());

	Money m3(2.35);

	m1 = m1 - m3;

	ASSERT_EQ(1, m1.getDollars());
	ASSERT_EQ(1, m1.getQuarters());
	ASSERT_EQ(2, m1.getNickels());
	ASSERT_EQ(1, m1.getCents());


}

TEST(Money, AdditionSubtractionDollar){

	Money m1(2.04);
	Dollar d1(2);
	Dollar d2(3);

	m1 = m1 + d1;

	ASSERT_EQ(4, m1.getDollars());

	m1 = m1 - d2;

	ASSERT_EQ(1, m1.getDollars());

}

TEST(Money, AdditionSubtractionNickel){

	Money m1(2.04);
	Nickel n1(5);
	Nickel n2(3);

	m1 = m1 + n1;

	ASSERT_EQ(2, m1.getDollars());
	ASSERT_EQ(1, m1.getQuarters());
	ASSERT_EQ(0, m1.getNickels());
	ASSERT_EQ(4, m1.getCents());

	m1 = m1 - n2;

	ASSERT_EQ(2, m1.getDollars());
	ASSERT_EQ(0, m1.getQuarters());
	ASSERT_EQ(2, m1.getNickels());
	ASSERT_EQ(4, m1.getCents());

}

TEST(Money, AdditionSubtractionQuarter){

	Money m1(2.04);
	Quarter q1(6);
	Quarter q2(2);

	m1 = m1 + q1;

	ASSERT_EQ(3, m1.getDollars());
	ASSERT_EQ(2, m1.getQuarters());
	ASSERT_EQ(0, m1.getNickels());
	ASSERT_EQ(4, m1.getCents());

	m1 = m1 - q2;

	ASSERT_EQ(3, m1.getDollars());
	ASSERT_EQ(0, m1.getQuarters());
	ASSERT_EQ(0, m1.getNickels());
	ASSERT_EQ(4, m1.getCents());

}

TEST(Money, AdditionSubtractionCent){

	Money m1(2.95);
	Cent c1(27);
	Cent c2(31);

	m1 = m1 + c1;

	ASSERT_EQ(3, m1.getDollars());
	ASSERT_EQ(0, m1.getQuarters());
	ASSERT_EQ(4, m1.getNickels());
	ASSERT_EQ(2, m1.getCents());

	m1 = m1 - c2;

	ASSERT_EQ(2, m1.getDollars());
	ASSERT_EQ(3, m1.getQuarters());
	ASSERT_EQ(3, m1.getNickels());
	ASSERT_EQ(1, m1.getCents());

}

TEST(Money, Rounding){

	Money m1(2.95);
	Money m2(5.67);

	m1++;
	m2--;

	ASSERT_EQ(3, m1.getDollars());
	ASSERT_EQ(0, m1.getQuarters());
	ASSERT_EQ(0, m1.getNickels());
	ASSERT_EQ(0, m1.getCents());

	ASSERT_EQ(5, m2.getDollars());
	ASSERT_EQ(2, m2.getQuarters());
	ASSERT_EQ(0, m2.getNickels());
	ASSERT_EQ(0, m2.getCents());

}

TEST(Money, Comparison){

	Money m1(2.95);
	Money m2(5.67);
	Money m3(2.95);

	ASSERT_EQ(1, m2 >= m1);
	ASSERT_EQ(1, m1 <= m3);
	ASSERT_EQ(0, m1 >= m2);

}

TEST(Money, QuartersAndNickels){

	Money m1(2.95);
	Money m2(5.67);
	
	Quarter q();
	Nickel n();

	q = !m1;

	ASSERT_EQ(11, q.getQuarters());

	n = ~m2;

	ASSERT_EQ(113, n.getNickels());

}

TEST(Money, DivideAndMultiply){

	Money m1(2.95);
	Money m2(5.67);
	Money m3();

	m3 = m1 / 5;

	ASSERT_EQ(0, m3.getDollars());
	ASSERT_EQ(2, m3.getQuarters());
	ASSERT_EQ(1, m3.getNickels());
	ASSERT_EQ(4, m3.getCents());

	m3 = m2 * 2;

	ASSERT_EQ(11, m3.getDollars());
	ASSERT_EQ(1, m3.getQuarters());
	ASSERT_EQ(1, m3.getNickels());
	ASSERT_EQ(4, m3.getCents());		

}

// Q2: Date

TEST(Date, Constructors){

	Date d(2020,5,10);

	ASSERT_EQ(2020, d.getYear());
	ASSERT_EQ(5, d.getMonth());
	ASSERT_EQ(10, d.getDay());

}

TEST(Date, AssignmentOperator){

	Date d1(2020, 5, 10);
	Date d2(1974, 6, 4);

	d2 = d1;

	ASSERT_EQ(2020, d2.getYear());
	ASSERT_EQ(5, d2.getMonth());
	ASSERT_EQ(10, d2.getDay());

}

TEST(Date, IntArithmetic){

	Date d1(2020, 5, 29);

	d1 = d1 + 4;

	ASSERT_EQ(2020, d1.getYear());
	ASSERT_EQ(6, d1.getMonth());
	ASSERT_EQ(2, d1.getDay());

	d1 = d1 - 6;

	ASSERT_EQ(2020, d1.getYear());
	ASSERT_EQ(5, d1.getMonth());
	ASSERT_EQ(27, d1.getDay());

}

TEST(Date, DateArithmetic){

	Date d1(2020, 5, 29);
	Date d2(2022, 8, 16);
	int difference;

	d3 = d2 + d1;

	ASSERT_EQ(4043, d3.getYear());
	ASSERT_EQ(2, d3.getMonth());
	ASSERT_EQ(14, d3.getDay());

	difference = d2 - d1;

	ASSERT_EQ(809, difference);

}

TEST(Date, Comparison){

	Date d1(2020, 5, 29);
	Date d2(2022, 8, 16);
	Date d3(2022, 8, 16);

	ASSERT_EQ(1, d2 > d1);
	ASSERT_EQ(1, d3 <= d2);
	ASSERT_EQ(1, d1 < d2);
	ASSERT_EQ(1, d2 >= d3);

}

TEST(Date, Equalility){

	Date d1(2020, 5, 29);
	Date d2(2022, 8, 16);
	Date d3(2022, 8, 16);

	ASSERT_EQ(1, d1 != d2);
	ASSERT_EQ(1, d2 == d3);

}

TEST(Date, LeapYear){

	Date d1(2020, 5, 29);
	Date d2(2022, 8, 16);

	ASSERT_EQ(1, d1.isLeapYear());
	ASSERT_EQ(0, d2.isLeapYear());

}

TEST(Date, toString){

	Date d1(2000, 5, 25);

	ASSERT_EQ(0, strcmp("2000/05/25", d1.ToString()));

}


// Q3: BigInt  

TEST(BigInt, Constructors) { 
    string expected1="119622220865480194561963161495657715064383733760000000000";
    string expected2="99999";
    BigInt a(expected1);
    BigInt b(99999);
    BigInt c(a);
    string s1=(string)a;
    string s2=(string)b;
    string s3=(string)c;
    ASSERT_EQ(0, s1.compare(expected1));
    ASSERT_EQ(0, s2.compare(expected2));
    ASSERT_EQ(0, s3.compare(expected1));
    
}
TEST(BigInt, Addition) { 
        string str="9999999999999999999";
	BigInt a(str);
	BigInt b=a+1;
	BigInt c;
	c=a+b;
        BigInt d(2);
        d+=a;
        
        string s1=(string)b; string expected1="10000000000000000000";
        string s2=(string)c; string expected2="19999999999999999999";
        string s3=(string)d; string expected3="10000000000000000001";
        
        ASSERT_EQ(0, s1.compare(expected1));
        ASSERT_EQ(0, s2.compare(expected2));
        ASSERT_EQ(0, s3.compare(expected3));
       
        
}

TEST(BigInt, Subtraction) { 
        string str="10000000000000000000";
	BigInt a(str);
	BigInt b=a-1;
	BigInt c;
	c=a-b;
        BigInt d(2);
        a-=d;
        
        string s1=(string)b; string expected1="9999999999999999999";
        string s2=(string)c; string expected2="1";
        string s3=(string)a; string expected3="9999999999999999998";
        
        ASSERT_EQ(0, s1.compare(expected1));
        ASSERT_EQ(0, s2.compare(expected2));
        ASSERT_EQ(0, s3.compare(expected3));
    
}
TEST(BigInt, Mul) { 
        string str="119622220865480194561963161495657715064383733760000000000";
	BigInt a(str);
	BigInt b;
	BigInt c=a*b;
	
        BigInt d(46);
        a*=d;
        
        string s1=(string)c; string expected1="0";
        string s2=(string)a; string expected2="5502622159812088949850305428800254892961651752960000000000";
                
        ASSERT_EQ(0, s1.compare(expected1));
        ASSERT_EQ(0, s2.compare(expected2));
        
    
}

TEST(BigInt, LogicalOperators) { 
        string str1="119622220865480194561963161495657715064383733760000000000";
	string str2="5502622159812088949850305428800254892961651752960000000000";
	BigInt a(str1);
	BigInt c(str1);
	BigInt b(str2);
	                
        ASSERT_EQ(true, a==c);
        ASSERT_EQ(false, a==b);
        ASSERT_EQ(true, a!=b);
        ASSERT_EQ(true, a<=b);
        ASSERT_EQ(false, a>=b);
        ASSERT_EQ(false, a>b);
        ASSERT_EQ(true, a<b);
        
    
}

TEST(BigInt, UnaryOperators) { 
        string str1="9999999999999999999";
	string str2="10000000000000000000";
	BigInt a(str1);
	BigInt c(str1);
	BigInt b(str2);
	a++;
	string s1=(string)a; string expected1="10000000000000000000";
        ASSERT_EQ(0, s1.compare(expected1));
	
	--a;
	string s2=(string)a; string expected2="9999999999999999999";
        ASSERT_EQ(0, s2.compare(expected2));
	
	++b;
	string s3=(string)b; string expected3="10000000000000000001";
        ASSERT_EQ(0, s3.compare(expected3));
	
	b--;
	string s4=(string)b; string expected4="10000000000000000000";
        ASSERT_EQ(0, s4.compare(expected4));                
        
        
    
}
TEST(BigInt, InputOutput) { 
        BigInt s1;
        cin>>s1;// input "2019" on terminal
        BigInt s2("2019";
        cout<<s1;
        ASSERT_EQ(true,s2==s1 );
    
}


// Q4: Polynominal
TEST(Polynominal, Constructors) { 
        Polynomial x(3);
	cin>>x;// input 4x^3 + 3x + 2
	string s1=(string)x;
	string s2="4x^3 + 3x + 2";
	ASSERT_EQ(0, s1.compare(s2));
	cout<<x;
	Polynomial z(x);
	string s3=(string)z;
	
	ASSERT_EQ(0, s3.compare(s2));
	cout<<z;
    
}

TEST(Polynominal, ArithmeticOperatorsplus) { 
        Polynomial x(2);
	cin>>x;// input 4x^2 + 3x + 1
	string s1=(string)x;
	string s2="4x^2 + 3x + 1";
	ASSERT_EQ(0, s1.compare(s2));
	cout<<x;
	Polynomial z(1);
	cin>>z;// input x + 1
	
	Polynomial y=x+z;
	//cout<<y;
	string s3=(string)y;
	string s4="4x^2 + 4x + 2";
	ASSERT_EQ(0, s3.compare(s2));
	y+=z;
	
	string s5=(string)y;
	string s6="4x^2 + 5x + 3";
	ASSERT_EQ(0, s5.compare(s6));
	
    
}

TEST(Polynominal, ArithmeticOperatorssub) { 
        Polynomial x(2);
	cin>>x;// input 4x^2 + 3x + 1
	string s1=(string)x;
	string s2="4x^2 + 3x + 1";
	ASSERT_EQ(0, s1.compare(s2));
	cout<<x;
	Polynomial z(1);
	cin>>z;// input x + 1
	
	Polynomial y=x-z;
	//cout<<y;
	string s3=(string)y;
	string s4="4x^2 + 2x";
	ASSERT_EQ(0, s3.compare(s2));
	
	y-=z;
	
	string s5=(string)y;
	string s6="4x^2 + x - 1";
	ASSERT_EQ(0, s5.compare(s6));
    
}

TEST(Polynominal, Equalility) { 
        Polynomial x(2);
	cin>>x;// input 4x^2 + 3x + 1
	string s1=(string)x;
	string s2="4x^2 + 3x + 1";
	ASSERT_EQ(0, s1.compare(s2));
	cout<<x;
	Polynomial z(2);
	cin>>z;// input 4x^2 + 3x + 1
	ASSERT_EQ(true, z==x);
    
}

// Q5: Bouquet


TEST(Bouquet, Constructors) { 
        Flower r1("Rose", "Yellow", 1.5);
        Flower r2("Rose", "Yellow", 3.0, true);
        Flower r3("Rose", "Red", 2.0, true, true);
        
        string s1=(string)r1;
        string s2="Rose Yellow 0, Price: 1.5 Rs.";
        string s3=(string)r2;
        string s4="Rose Yellow 1, Price: 3.0 Rs.";
        
        ASSERT_EQ(0, s1.compare(s2));
         ASSERT_EQ(0, s3.compare(s4));
        
        cout << r3 << endl;
        Bouquet b1;
        string s5=(string)b1;
        string s6="Still no flower in the bouquet";
        ASSERT_EQ(0, s6.compare(s5));
        
    
}

TEST(Bouquet, AddRemoveFlower) { 
        Flower r1("Rose", "Yellow", 1.5);
        Flower r2("Rose", "Yellow", 3.0, true);
        Flower r3("Rose", "Red", 2.0, true, true);
        
        
        Bouquet b1;
        b1 += r1; // add one Flower of r1 type
        string s1=(string)b1;
        string s2="Rose Yellow 0, Price: 1.5 Rs.\nTotal Price: 1.5 Rs.";
	ASSERT_EQ(0, s1.compare(s2));
	b1 = b1 - r1; // Delete all the Flowers of type r1
	string s3=(string)b1;
        string s4="Still no flower in the bouquet";
        ASSERT_EQ(0, s3.compare(s4));
	b1 += r1; // add another Flower of r1
	b1 += r2;
	b1 += r3;
	cout << b1 << endl;

	Bouquet b2;
	b2 = b1 + r1; // Add one Flower of type r1
	cout << b2 << endl;

	// Delete all the perfumed flowers from the bouquet.
	b2 -= r2;
	cout << b2 << endl;
	b2 -= r3;
	cout << b2 << endl;
    
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
