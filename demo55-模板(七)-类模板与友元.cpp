#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<stdio.h>

using namespace std;

//��ǰ����Person���printPerson2�Ĵ��� 
template<class T1 , class T2>
class Person; 

template<class T1 , class T2>
void printPerson2(const Person<T1,T2> &p); 


template<class T1 , class T2>
class Person
{
	//ȫ�ֺ�������ʵ��
	friend void printPerson(const Person<T1,T2> &p)
	{
		cout<< "name: " << p.name << " age: " << p.age << endl; 
	} 
	
	//��Ҫ�ñ�����֪��ȫ�ֺ����Ĵ���
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

//ȫ�ֺ�������ʵ��
template<class T1 , class T2>
void printPerson2(const Person<T1,T2> &p)
{
	cout<< "name: " << p.name << " age: " << p.age << endl; 
} 

//����Ԫ�����ģ�����˽�б���
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
