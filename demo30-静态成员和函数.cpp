#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>


using namespace std;


class Person
{
private:
	string name;
	static int number;
	
public:
	

	static void setNumber(int number){
		Person::number = number;
	}

	static int getNumber(void){
		return Person::number;
	}

	string getName(void){
		return this->name;
	}

	Person();
	Person(string name);
	~Person();
};

int Person::number = 100;

Person::Person(){

}

Person::Person(string name){
	this->name = name;
}

Person::~Person(){

}

int main(void)
{
	Person p1("张三");
	Person p2("李四");
	Person p3;
	string str = "aaa"; 

	
	// p1.setNumber(100);
//	Person::number = 100;

	cout<<"p1 name = "<<p1.getName()<<" number = "<<p1.getNumber()<<endl;
	cout<<"p2 name = "<<p2.getName()<<" number = "<<p2.getNumber()<<endl;

	p1.setNumber(200);

	cout<<"p1 name = "<<p1.getName()<<" number = "<<Person::getNumber()<<endl;
	cout<<"p2 name = "<<p2.getName()<<" number = "<<p2.getNumber()<<endl;


	cout<<sizeof(p1)<<endl;
	cout<<sizeof(p3)<<endl;
	cout<<sizeof(string)<<endl;
	return 0;
}







