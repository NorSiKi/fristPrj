#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Person
{
	friend ostream & operator<<(ostream &cout , Person p); 
	friend Person operator+(const Person &p1 , const Person &p2);
private:
	
	int password;
public:
	string name;
	int age;

	int getAge() const{
		return this->age;
	}  

	void setName(string name){
		this->name = name;
	}

	void setAge(int age){
		this->age = age;
	}

	void setPassword(int newpwd){
		this->password = newpwd;
	}

	Person();
	Person(const Person &p);
	Person(string name , int age,int password);
	~Person();

	//ǰ�õ���
	Person& operator++(){
		this->age++;
		return *this;
	}

	//���õ��� int ����һ��ռλ���� ���߱��������Ǻ�������
	Person operator++(int)
	{
		Person temp = Person(*this);
		this->age++;
		return temp;
	}
};

Person::Person(){

}

Person::Person(const Person &p)
{
	this->age = p.age;
	this->name = p.name;
	this->password = p.password;
}

Person::Person(string name , int age,int password){
	this->name = name;
	this->age = age;
	this->password = password;
}

Person::~Person(){

}

//�Ӻ����������
Person operator+(const Person &p1 , const Person &p2)
{
	Person temp;
	temp.age = p1.age + p2.age;
	temp.name = p1.name + p2.name;
	temp.password = p1.password + p2.password;

	return temp;
}

//��ȫ�ֺ����������������
ostream & operator<<(ostream &cout , Person p)
{
	cout<<"����: "<<p.name<<" ����:"<<p.age<<" ����: "<<p.password;
	return cout;
}

//�������������

//ǰ�õ���



//���õ���


int main(void)
{
	Person p("����",12,123456);

	cout<<p<<endl;

	cout<< ++p <<endl;

	cout<< p++ <<endl;

	cout<< p << endl;

	return 0;
}







