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

//���һ��������Ĭ�ϲ���,�ж�����
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
	cout<<"func2 int &a ��ִ��"<<endl;
}

void func2(const int &a)
{
	cout<<"func2 const int &a ��ִ��"<<endl;
}






