#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
	int a = 10;

	//创建引用
	int &b = a; 

	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;

	b = 100;

	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;

	return 0;
}




