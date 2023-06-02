#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Base
{
public:
	Base(void)
	{
		cout<< "���๹�캯������" <<endl; 
	}
	
	//���������Խ�������������Դ�ͷŲ��ɾ������� 
//	virtual ~Base(void)
//	{
//		cout<< "����������������" <<endl;
//	}

	//�������� ��Ҫ����Ҳ��Ҫʵ�� ���˴���������,����Ҳ���ڳ�����,�޷���ʵ�������� 
	virtual ~Base() = 0; 
};

Base::~Base()
{
	cout<< "���ി����������" <<endl;
} 

class Son:public Base
{
public:

	string *name;

	Son(void);
	Son(string name);
	~Son();
};

Son::Son(void)
{
	cout<< "���๹�캯������" <<endl; 
	this->name = new string("������");
}

Son::Son(string name)
{
	this->name = new string(name);
}

Son::~Son()
{
	cout<< "����������������" <<endl;
	delete this->name;
}

// Son::~Base(void)
// {

// }

void test01()
{
	Base *b = new Son("����");

	delete b;
}


int main(void)
{
	test01();
	
	return 0;
}




