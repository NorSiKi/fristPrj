#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<stdio.h>

using namespace std;

template<class T>
class Base{
	T var;
};

//������ģ������ô����̳�ʱҪôָ����������Ҫô����Ҳ��ģ����
class Son1 : public Base<int>
{
		int YourVar;
	public:
		Son1() {

		}
		~Son1() {

		}
};


template<class T>
class Son2 : public Base<T>
{
	int YourVar;
public:
	Son2() {

	}
	~Son2() {

	}
};


int main(void)
{
    Son1 s;
	Son2<int> s2;
	
    return 0;
}
