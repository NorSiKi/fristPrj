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
		cout<<"Phone�Ŀ�������"<<endl;
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
	cout<<"Phone���޲ι���"<<endl;
}

Phone::Phone(string phoneNumber)
{
	cout<<"Phone���вι���"<<endl;
	this->phoneNumber = phoneNumber;
}

Phone::~Phone()
{
	cout<<"Phone����������"<<endl;	
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
	cout<<"People���޲ι���"<<endl;
}

People::People(string name , Phone phone)
{
	this->name = name;
	this->phone = phone;
}

People::~People()
{
	cout<<"People����������"<<endl;
}

int main(void)
{
	People p;
	// Phone phone("15102700136");

	// p.setName("����");
	// p.setPhone(phone);

	// cout<<"����Ϊ: "<<p.getName()<<" �绰����Ϊ: "<<p.getPhoneNumber()<<endl;

	return 0;
}







