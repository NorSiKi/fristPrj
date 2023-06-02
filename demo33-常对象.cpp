#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>


using namespace std;


class Person
{
private:
	int age;
public:

	int getAge() const{
		return this->age;
	}  

	void setAge(int age){
		this->age = age;
	}

	Person * ageAdd(const Person &p){
		this->age+=p.age;
		return this;
	}
	
	Person ageAdd2(const Person &p){
		this->age+=p.age;
		return *this;
	}

	Person & ageAdd3(const Person &p){
		this->age+=p.age;
		return *this;
	}

	Person();
	Person(int age);
	~Person();
};


Person::Person(){

}

Person::Person(int age){
	this->age = age;
}

Person::~Person(){

}

int main(void)
{
	//常对象只能调用常函数 因为普通函数可以修改参数的值
	const Person p(110);
	Person p1(10);

	cout<<p.getAge()<<endl;
	cout<<p1.getAge()<<endl;

	return 0;
}







