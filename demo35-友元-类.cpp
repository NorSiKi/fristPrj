#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>


using namespace std;

class Person;
class GoodFriend;

class Person
{
	friend class GoodFriend;	
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

class GoodFriend
{
private:
	
public:

	void visit(const Person &p){
		cout<<"ÃÜÂëÎª:"<<p.password<<endl;
	}

	GoodFriend(/* args */);
	~GoodFriend();
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

int main(void)
{
	Person p(12,123456);
	GoodFriend aFriend;

	aFriend.visit(p);

	return 0;
}







