#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

int * func(void);

int main(void)
{
	int *p = func();
	
	cout<<"*p = "<<*p<<endl;
	
	*p = 10;

	cout<<"*p = "<<*p<<endl;

	delete p;
	
	cout<<"*p = "<<*p<<endl;
	return 0;
}

int * func(void)
{
	return new int();
}



