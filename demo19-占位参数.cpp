#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

//������ʵ�ֵ�Ĭ�ϲ�������ͬʱ����,��Ϊ�ж�����
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




