#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>


using namespace std;


class Person
{
	//全局函数做友元声明
	friend void showPassword(const Person &p);
private:
	int password;
public:

	int age;

	int getAge() const{
		return this->age;
	}  

	void setAge(int age){
		this->age = age;
	}

	void setPassword(int newpwd){
		this->password = newpwd;
	}

	Person();
	Person(int age,int password);
	~Person();
};

void showPassword(const Person &p){
	cout<<"全局函数做友元  该对象的密码是:"<<p.password<<endl;
}

Person::Person(){

}

Person::Person(int age,int password){
	this->age = age;
	this->password = password;
}

Person::~Person(){

}

int main(void)
{
	Person p(12,123456);

	showPassword(p);

	return 0;
}







