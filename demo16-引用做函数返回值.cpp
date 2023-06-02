#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

int temp;

int & func(int);

int main(void)
{
	int a = func(5);
	int &b = func(5);

	cout<<"a = "<<a<<endl;
	cout<<"temp = "<<temp<<endl;
	cout<<"b = "<<b<<endl;

	a = 10;

	cout<<"a = "<<a<<endl;
	cout<<"temp = "<<temp<<endl;
	cout<<"b = "<<b<<endl;

	b = 15;

	cout<<"a = "<<a<<endl;
	cout<<"temp = "<<temp<<endl;
	cout<<"b = "<<b<<endl;

	return 0;
}

int & func(int a)
{
	temp = a*a;
	return temp;
}




