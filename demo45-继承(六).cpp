#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Animal
{
public:
	//��ַ���
	virtual void speak()
	{
		cout<<"�������"<<endl;
	}
};

class Dog : public Animal
{
public:
	void speak()
	{
		cout<<"������"<<endl;
	}
};

class Cat : public Animal
{
public:
	void speak()
	{
		cout<<"������"<<endl;
	}
};

//��ַ��� �ڱ���׶ξ�ȷ���˺�����ַ
//�����ִ����è˵��,��Ҫ�ں������н׶ΰ󶨺�����ַ ����ַ���
void doSpeak(Animal &a)
{
	a.speak();
}

int add(int a , int b)
{
	return a+b;
}

int main(void)
{
	Animal a;
	Dog d;
	Cat c;
	doSpeak(a);
	doSpeak(d);
	doSpeak(c);

	// d.Animail::speak();
	return 0;
}






