#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Animal
{
public:
 	int m_Age;
};
//加入virtual虚继承解决问题 数据只有一份
class Sheep :virtual public Animal{};

class Camel :virtual public Animal{};


class Alpaca : public Sheep , public Camel{};

int main(void)
{
	Alpaca a;
	a.Sheep::m_Age = 10;
	a.Camel::m_Age = 20;
	a.m_Age = 50;
	// a.Sheep::Animal::m_Age = 30;
	// a.Camel::Animal::m_Age = 40;

	//菱形继承导致数据有两份,有资源浪费
	cout<<"a.Sheep::m_Age = "<<a.Sheep::m_Age<<endl;
	cout<<"a.Camel::m_Age = "<<a.Camel::m_Age<<endl;
	cout<<"a.m_Age = "<<a.m_Age<<endl;

	return 0;
}







