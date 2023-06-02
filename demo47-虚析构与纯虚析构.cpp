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
		cout<< "父类构造函数调用" <<endl; 
	}
	
	//虚析构可以解决子类对象中资源释放不干净的问题 
//	virtual ~Base(void)
//	{
//		cout<< "父类析构函数调用" <<endl;
//	}

	//纯虚析构 需要声明也需要实现 有了纯虚析构后,该类也属于抽象类,无法被实例化对象 
	virtual ~Base() = 0; 
};

Base::~Base()
{
	cout<< "父类纯虚析构调用" <<endl;
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
	cout<< "子类构造函数调用" <<endl; 
	this->name = new string("儿子类");
}

Son::Son(string name)
{
	this->name = new string(name);
}

Son::~Son()
{
	cout<< "子类析构函数调用" <<endl;
	delete this->name;
}

// Son::~Base(void)
// {

// }

void test01()
{
	Base *b = new Son("张三");

	delete b;
}


int main(void)
{
	test01();
	
	return 0;
}




