#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

//声明和实现的默认参数不能同时出现,因为有二义性
void func(int , int , int = 10);

int main(void)
{
	int a = 20;

	func(a,20);

	return 0;
}

void func(int a , int , int)
{
	cout<<a<<endl;
}




