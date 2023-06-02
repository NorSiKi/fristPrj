#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

void func(int);
void func(int , int);

void func2(int &);
void func2(const int &);

int main(void)
{
	int a = 20;
	
	const int &b = a;
	
	func2(a);
	func2(b);

	return 0;
}

//如果一个重载有默认参数,有二义性
void func(int a)
{
	cout<<"func int a"<<endl;
}

void func(int a , int b = 10)
{
	cout<<"func int a , int b = 10"<<endl;
}

void func2(int &a)
{
	cout<<"func2 int &a 被执行"<<endl;
}

void func2(const int &a)
{
	cout<<"func2 const int &a 被执行"<<endl;
}






