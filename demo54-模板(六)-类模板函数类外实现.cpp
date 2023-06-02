#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<stdio.h>

using namespace std;

template<class T>
class Base{

public:
	T var;
	Base();
	Base(T var);
	~Base();
	void showBase();
};

template<class T>
Base<T>::Base()
{

}

template<class T>
Base<T>::~Base()
{

}

template<class T>
Base<T>::Base(T var)
{
	this->var = var;
}

template<class T>
void Base<T>::showBase()
{
	cout<< "var = " << this->var <<endl;
}

int main(void)
{
    Base<int> a(10);
    Base<string> b("hello");

	a.showBase();
	b.showBase();
	
    return 0;
}
