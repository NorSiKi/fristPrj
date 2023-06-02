#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

#pragma optimize( "", off) 

using namespace std;

string getStringByInt(int);

class Person
{
private:
	string name;
	int age;
	int score;

public:

	void setName(string name){
        this->name = name;
    }

	string getName(){
		return this->name;
	}

	void setAge(int age){
		this->age = age;
	}

	int getAge(){
		return this->age;
	}

	void setScore(int score){
		this->score = score;
	}

	int getScore(){
		return this->score;
	}

	void getMsg(){
		std::cout<<"name = "<<name<<" age = "<<age<<" score = "<<score<<endl;
	}

	//普通有参构造函数
	Person(string name , int age , int score);

	//普通无参构造函数
	Person(){
		cout<<"调用了无参构造函数"<<endl;
	}

	//拷贝构造函数 完全复制一个对象的数据,并不能修改原来的对象 所以要用const的引用
 	Person(const Person &p){
		cout<<"调用了拷贝构造函数"<<endl;
		this->age = p.age;
		this->name = p.name;
		this->score = p.score;
	 }

	//析构函数
	~Person();
};

Person::Person(string name , int age , int score)
{
	cout<<"调用了有参构造函数"<<endl;
	this->name = name;
    this->age = age;
    this->score = score;
}

Person::~Person()
{
	cout<<"调用了析构函数"<<endl;
}

Person * getPerson(void){
	Person *a = new Person("李四",16,70); 
	return a;
}

Person getPerson2(){
	Person a = Person("法外狂徒",20,59);
	cout<<"函数内的Person地址"<<(int*)(&a)<<endl;
	return a;
}

void setPerson(Person a){
	a.setAge(100);
}

 

int main(void)
{
	Person a = getPerson2();
	cout<<"函数外的Person地址"<<(int*)(&a)<<endl;
	a.getMsg();

	// setPerson(a);

	// a.getMsg();

	return 0;
}







