#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

class father
{

public:
	int number;

public:
	father(/* args */);
	~father();
	void func()
	{
		cout<<"father func"<<endl;
	}	
	
};

father::father(/* args */)
{
}

father::~father()
{
}

class son : public father
{
public:
	int number;

public:
	void setNumber()
	{
		this->father::number = 200;
		this->number = 100;
	}

	void showNumber(void)
	{
		cout<<number<<endl;
		cout<<this->father::number<<endl;
	}
	son(/* args */);
	~son();
	void func()
	{
		cout<<"son func"<<endl;
	}	
};

son::son(/* args */)
{
	this->father::number = 200;
	this->number = 100;
}

son::~son()
{
}



int main(void)
{
	son s;
	s.showNumber();
	s.func();
	s.father::func();
	

	return 0;
}







