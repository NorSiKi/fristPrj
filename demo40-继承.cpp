#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Animal
{
private:
	
public:
	string type;


public:
	Animal(/* args */);
	Animal(string type);
	~Animal();
	void jiao(void);
	void showType(void)
	{
		cout<<"ÀàÐÍÊÇ:"<<type<<endl;
	}
};

Animal::Animal(/* args */)
{
}

Animal::~Animal()
{
}

Animal::Animal(string type)
{
	this->type = type;
}

class Dog : public Animal
{
private:
	/* data */
public:
	Dog(/* args */);
	Dog(string type);
	~Dog();
};

Dog::Dog(/* args */)
{
}

Dog::~Dog()
{
}

Dog::Dog(string type)
{
	this->type = type;
}


int main(void)
{
	Dog d("pet");

	d.showType();


	

	return 0;
}







