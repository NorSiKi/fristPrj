#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<stdio.h>

using namespace std;

//��ͨ�����뺯��ģ����ù���
//1.�����ͨ�����뺯��ģ�嶼���Ե���,���ȵ�����ͨ����
//2.����ģ����Ͽ�ģ����� ǿ�Ƶ���ģ�庯��
//3.����ģ����Է�����������
//4.�������ģ����Բ������õ�ƥ��,�����ȵ��ú���ģ�� 


template<class T> void method(T a , int b)
{
	cout<< "����ģ�庯��" <<endl;
} 

template<class T> void method(T a , string b)
{
	cout<< "��������ģ�庯��" <<endl;
} 

template<class T> void method(T a , char b)
{
	cout<< "����charģ�庯��" <<endl;
} 

void method(int a , int b)
{
	cout<< "������ͨ����" <<endl;
}

int main(void)
{
    int a = 20 , b = 10;
	char ch = 'c';
	string str = "hello";
	
	method(a,b);
	method<int>(a,b);
	method(a,ch);
	method(a,str);
	 
	

    return 0;
}
