#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Print
{
private:
	
public:
	Print(/* args */);
	~Print();
	void operator()(string test){
		cout<< test <<endl;
	}
};

Print::Print(/* args */)
{
}

Print::~Print()
{
}


class myAdd
{
private:
	/* data */
public:
	myAdd(/* args */);
	~myAdd();
	int operator()(int a , int b){
		return a+b;
	} 
};

myAdd::myAdd(/* args */)
{
}

myAdd::~myAdd()
{
}


int main(void)
{
	Print p;
	myAdd m;

	p("my print");

	cout<< m(5,6) <<endl;
	

	return 0;
}







