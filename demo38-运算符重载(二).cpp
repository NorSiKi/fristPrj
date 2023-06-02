#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Person
{
private:
	
public:
	int *age = nullptr;

	int getAge() const{
		return *(this->age);
	}  

	void setAge(int age){
		this->age = new int(age);
	}

	Person();
	Person(const Person &p);
	Person(int age);
	~Person();

	//前置递增
	Person& operator++(){
		(*(this->age))++;
		return *this;
	}

	//后置递增 int 代表一个占位参数 告诉编译器这是后置运算
	Person operator++(int)
	{
		Person temp = Person(*this);
		(*(this->age))++;
		return temp;
	}

	//等号运算符重载
	Person& operator=(const Person &p)
	{
		if(this->age != NULL){
			delete this->age;
			this->age = NULL;
		}

		this->age = new int(*p.age);
		
		cout<< "call =" <<endl;

		return *this;
	}

	//关系运算符重载
	bool operator==(const Person &p)
	{
		if (*this->age == *p.age) return true;
		return false;
		
	}
};

Person::Person(){

}

Person::Person(const Person &p)
{
	this->age = new int(*p.age);
	cout<< "call constrcutor" <<endl;
}

Person::Person(int age)
{
	this->age = new int(age);
}

Person::~Person()
{
	if (age != NULL)
	{
		delete age;
		age = NULL;
	}
}

//加号运算符重载
Person operator+(const Person &p1 , const Person &p2)
{
	Person temp;
	temp.age = new int(*p1.age + *p2.age);

	return temp;
}

//在全局函数重载左移运算符
ostream & operator<<(ostream &cout , Person p)
{
	cout<<"年龄:"<<*p.age;
	return cout;
}


int main(void)
{
	Person p1(12);
	Person p2(12);
	Person p3(50);

	// cout<<"p1 = "<<p1<<endl;
	// cout<<"p2 = "<<p2<<endl;
	// cout<<"p3 = "<<p3<<endl;

	// p3 = p2 = p1;

	// cout<<endl;
	// cout<<"p1 = "<<p1<<endl;
	// cout<<"p2 = "<<p2<<endl;
	// cout<<"p3 = "<<p3<<endl;
	// cout<< ++p <<endl;

	// cout<< p++ <<endl;

	// cout<< p << endl;

//	if (p1 == p2)
//	{
//		cout<<"p1 == p2"<<endl;
//	}

	Person p4;
	
	p4 = p1;
	
	std::cout << p4;

	return 0;
}






