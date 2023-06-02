#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

int func(int &);

int main(void)
{
	int a = 10;

	int &b = a;

	func(a);

	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;

	return 0;
}

int func(int &a)
{
	a = 20;
}




