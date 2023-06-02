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

	
	return 0;
}

int * func(void)
{
	int *p = new int(10);
	return p;
}



