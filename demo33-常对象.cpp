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
	//������ֻ�ܵ��ó����� ��Ϊ��ͨ���������޸Ĳ�����ֵ
	const Person p(110);
	Person p1(10);

	cout<<p.getAge()<<endl;
	cout<<p1.getAge()<<endl;

	return 0;
}







