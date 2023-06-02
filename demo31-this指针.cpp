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
	

	int getAge(){
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

	void showAge(){
		if(this != NULL){
			cout<<"age is "<<this->age<<endl;
		} else {
			cout<<"the Person is NULL"<<endl;
		}
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
	Person p1(20);
	Person p2(18);
	Person * p = NULL;

	// p2.ageAdd(p1)->ageAdd(p1);

	// p2.ageAdd2(p1).ageAdd2(p1);

	p2.ageAdd3(p1).ageAdd3(p1);

	cout<<p2.getAge()<<endl;

	p->showAge();
	return 0;
}







