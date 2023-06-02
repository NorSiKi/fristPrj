#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

class father
{

public:
	father(/* args */);
	~father();
};

father::father(/* args */)
{
	cout<<"调用父类的构造函数"<<endl;
}

father::~father()
{
	cout<<"调用父类的析构函数"<<endl;
}

class son : public father
{
public:
	son(/* args */);
	~son();
};

son::son(/* args */)
{
	cout<<"调用子类的构造函数"<<endl;
}

son::~son()
{
	cout<<"调用子类的析构函数"<<endl;
}



int main(void)
{
	son s;


	

	return 0;
}







