#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

//只要类里面定义了一个纯虚函数,那么这个类就是一个抽象类
//抽象类特点
//	1.抽象类无法被实例化
//	2.抽象类的子类必须重写父类的纯虚函数,否则也属于抽象类
class Animal
{
public:
	//纯虚函数
	virtual void speak() = 0;
};

class Cat : public Animal
{
public:
	void speak()
	{
		cout<<"cat speak"<<endl;
	}
};

int main(void)
{
	
	
	return 0;
}





