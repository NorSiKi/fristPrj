#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<stdio.h>

using namespace std;

//普通函数与函数模板调用规则
//1.如果普通函数与函数模板都可以调用,优先调用普通函数
//2.函数模板加上空模板参数 强制调用模板函数
//3.函数模板可以发生函数重载
//4.如果函数模板可以产生更好的匹配,则优先调用函数模板 


template<class T> void method(T a , int b)
{
	cout<< "这是模板函数" <<endl;
} 

template<class T> void method(T a , string b)
{
	cout<< "这是重载模板函数" <<endl;
} 

template<class T> void method(T a , char b)
{
	cout<< "这是char模板函数" <<endl;
} 

void method(int a , int b)
{
	cout<< "这是普通函数" <<endl;
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
