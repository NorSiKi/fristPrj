#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>


using namespace std;

class Person;
class GoodFriend;

class GoodFriend
{
private:
	
public:

	void visit(const Person &p);

	void visit2(const Person &p){
//		cout<<"ÃÜÂëÎª:"<<p.age<<endl;
	}

	GoodFriend(/* args */);
	~GoodFriend();
};

class Person
{
	friend void GoodFriend::visit(const Person &p);	
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

GoodFriend::GoodFriend(/* args */)
{
}

GoodFriend::~GoodFriend()
{
}

Person::Person(){

}

Person::Person(int age,int password){
	this->age = age;
	this->password = password;
}

Person::~Person(){

}

void GoodFriend::visit(const Person &p){
	cout<<"ÃÜÂëÎª:"<<p.password<<endl;
}


int main(void)
{
	Person p(12,123456);
	GoodFriend aFriend;


	aFriend.visit(p);

	return 0;
}







