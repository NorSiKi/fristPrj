#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<stdio.h>

using namespace std;

//提前声明Person类和printPerson2的存在 
template<class T1 , class T2>
class Person; 

template<class T1 , class T2>
void printPerson2(const Person<T1,T2> &p); 


template<class T1 , class T2>
class Person
{
	//全局函数类内实现
	friend void printPerson(const Person<T1,T2> &p)
	{
		cout<< "name: " << p.name << " age: " << p.age << endl; 
	} 
	
	//需要让编译器知道全局函数的存在
	friend void printPerson2<>(const Person<T1,T2> &p);

	
private:
	T1 age;
public:
	T2 name;
	
	Person();
	Person(T1 age , T2 name);
	~Person();
	void showPerson();
};

template<class T1 , class T2>
Person<T1,T2>::Person()
{
	
}

template<class T1 , class T2>
Person<T1,T2>::Person(T1 age , T2 name)
{
	this->age = age;
	this->name = name;
}

template<class T1 , class T2>
Person<T1,T2>::~Person()
{
	
}

//全局函数类外实现
template<class T1 , class T2>
void printPerson2(const Person<T1,T2> &p)
{
	cout<< "name: " << p.name << " age: " << p.age << endl; 
} 

//让友元类访问模板类的私有变量
template<class T1 , class T2>
class Sample
{

public:
	Sample()
	{
		
	} 
	
	~Sample()
	{
		
	}
	
	void showPerson(const Person<T1,T2> &p);
}; 

template<class T1 , class T2>
void Sample<T1,T2>::showPerson(const Person<T1,T2> &p)
{
//	cout<< "name: " << p.name << " age: " << p.age << endl; 
}


int main(void)
{
    Person<int,string> p1(18,"nick");
    Sample<int,string> s;
    
    s.showPerson(p1);
    
    printPerson(p1);
    printPerson2(p1);
    
	
    return 0;
}
