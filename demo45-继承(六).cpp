#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Animal
{
public:
	//地址晚绑定
	virtual void speak()
	{
		cout<<"动物叫了"<<endl;
	}
};

class Dog : public Animal
{
public:
	void speak()
	{
		cout<<"汪汪汪"<<endl;
	}
};

class Cat : public Animal
{
public:
	void speak()
	{
		cout<<"喵喵喵"<<endl;
	}
};

//地址早绑定 在编译阶段就确定了函数地址
//如果想执行让猫说话,就要在函数运行阶段绑定函数地址 即地址晚绑定
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






