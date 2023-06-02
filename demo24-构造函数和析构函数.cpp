#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

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
	return a;
}

//下面两个方法不能同时出现
void setPerson(Person a){

}

void setPerson(const Person & a){

}

 

int main(void)
{
	//默认无参构造创建 默认创建对象不要加(),编译器会认为这是一个函数的声明
	Person p0;

	//有参构造构造创建
	Person p1("张三",18,88);

	//拷贝构造创建
	Person p2(p1);

	//创建数组
	Person *arr = new Person[10];
	Person arr2[10];
	
	//对象做函数返回值
	Person p3 = getPerson2();

	//对象指针做函数返回值
	Person * p4 = getPerson();

	//显示法创建对象
	Person p5 = Person("王五",25,60);
	Person p6 = Person(p5);


	p0.getMsg();
	p1.getMsg();
	p2.getMsg();
	p3.getMsg();
	p4->getMsg();
	p5.getMsg();
	p6.getMsg();

	delete p4;
	delete[] arr;
	return 0;
}







