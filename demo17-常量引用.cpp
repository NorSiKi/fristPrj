#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;


void func(const int &);

int main(void)
{
	int a = 20;

	func(a);

	return 0;
}

void func(const int & value)
{
//	value = 100;
//	const�����ò����޸�

	cout<<"value = "<<value<<endl;
}




