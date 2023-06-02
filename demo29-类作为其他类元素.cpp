#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>


using namespace std;

class Phone
{
private:
	string phoneNumber;
public:

	Phone(string phoneNumber);
	Phone(/* args */);
	~Phone();

	Phone(const Phone &p){
		cout<<"Phone的拷贝函数"<<endl;
		this->phoneNumber = p.phoneNumber;
	}

	void setPhoneNuber(string phoneNumber)
	{
		this->phoneNumber = phoneNumber;
	}

	string getPhoneNumber(){
		return this->phoneNumber;
	}
};

Phone::Phone(/* args */)
{
	cout<<"Phone的无参构造"<<endl;
}

Phone::Phone(string phoneNumber)
{
	cout<<"Phone的有参构造"<<endl;
	this->phoneNumber = phoneNumber;
}

Phone::~Phone()
{
	cout<<"Phone的析构函数"<<endl;	
}


class People
{
private:
	string name;
	Phone phone;
public:
	People(/* args */);
	People(string name , Phone phone);
	~People();

	void setName(string name){
		this->name = name;
	}

	void setPhone(Phone p){
		this->phone = p;
	}

	string getName(){
		return this->name;
	}

	string getPhoneNumber(){
		return this->phone.getPhoneNumber();
	}
};

People::People(/* args */)
{
	cout<<"People的无参构造"<<endl;
}

People::People(string name , Phone phone)
{
	this->name = name;
	this->phone = phone;
}

People::~People()
{
	cout<<"People的析构函数"<<endl;
}

int main(void)
{
	People p;
	// Phone phone("15102700136");

	// p.setName("张三");
	// p.setPhone(phone);

	// cout<<"姓名为: "<<p.getName()<<" 电话号码为: "<<p.getPhoneNumber()<<endl;

	return 0;
}







