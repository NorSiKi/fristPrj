#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

//������ʵ�ֵ�Ĭ�ϲ�������ͬʱ����,��Ϊ�ж�����
void func(int , int , int);

int main(void)
{
	int a = 20;

	func(a,20);

	return 0;
}

void func(int a , int b = 12, int c = 13)
{
	cout<<(a+b+c)<<endl;
}




