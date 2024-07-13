#include <iostream>
#include <string>
using namespace std;

class Processor {
	double cost;
	string name;
public:
	Processor(double cost, string name);
	Processor();
	~Processor(); 
	double getCost()
	{
		return cost;
	}
	string getName()
	{
		return name;
	}
	void setCost(double cost)
	{
		this->cost = cost;
	}
	void setName(string name)
	{
		this->name = name;
	}
};

Processor::Processor(double cost , string name)
{
	this->name = name;
	this->cost = cost;
}
Processor::Processor()
{
	name = "";
	cost = 0;
}
Processor::~Processor()
{
}

class MainMemory {
	int size;
	double cost;
public:
	MainMemory();
	MainMemory(int size , double cost);
	~MainMemory();
	void setCost(double cost)
	{
		this->cost = cost;
	}
	double getCost()
	{
		return cost;
	}
	void setSize(int cost)
	{
		this->size = size;
	}
	int getSize()
	{
		return size;
	}
};

MainMemory::MainMemory(int size, double cost)
{
	this->size = size;
	this->cost = cost;
}
MainMemory::MainMemory()
{
	size = 0;
	cost = 0;
}
MainMemory::~MainMemory()
{
}

class MotherBoard {
	string compName;
public:
	MotherBoard();
	MotherBoard(string compName);
	~MotherBoard();
	string getCompName()
	{
		return compName;
	}
	void setCompName(string compName)
	{
		this->compName = compName;
	}
};

MotherBoard::MotherBoard(string compName)
{
	this->compName = compName;
}
MotherBoard::MotherBoard()
{
	this->compName = "intel";
}
MotherBoard::~MotherBoard()
{
}

class Computer {
	Processor proc;
	MainMemory ram;
	MotherBoard mboard;
public:
	Computer();
	Computer(Processor proc  , MainMemory ram ,  MotherBoard mboard);
	~Computer();
	Processor getProc()
	{
		return this->proc;
	}
	MainMemory getRam()
	{
		return this->ram;
	}
	MotherBoard getMboard()
	{
		return this->mboard;
	}
	void setProc(Processor proc)
	{
		this->proc = proc;
	}
	void setRam(MainMemory ram)
	{
		this->ram = ram;
	}
	void setMboard(MotherBoard mboard)
	{
		this->mboard = mboard;
	}
};

Computer::Computer(Processor proc, MainMemory ram , MotherBoard mboard)
{
	this->proc = proc;
	this->ram = ram;
	this->mboard = mboard;
}
Computer::Computer()
{
}
Computer::~Computer()
{
}

int main()
{
	string name;
	double cost;
	cout<<"Processor name : ";
	cin>>name;
	cout<<"Processor cost : ";
	cin>>cost;
	Processor proc(cost,name);

	int size;
	cout<<"Main memory size : ";
	cin>>size;
	cout<<"Main memory cost : ";
	cin>>cost;
	MainMemory mem(size, cost);
	
	cout<<"Motherboard name : ";
	cin>>name;
	MotherBoard mb(name);

	Computer comp(proc, mem, mb);

	cout<<"\nYour computer : \n";
	cout<<"\nProcessor : Name : "<<comp.getProc().getName()<<" , Cost : "<<comp.getProc().getCost()<< '\n';
	cout<<"\nMain memory : Size : "<<comp.getRam().getSize()<<" , Cost : "<<comp.getRam().getCost()<<'\n';
	cout<<"\nMotherboard : Name : "<<comp.getMboard().getCompName()<<'\n';
	return 0;
}
