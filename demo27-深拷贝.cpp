#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>


using namespace std;


class Person
{
private:
	string *name;
	int *age;
	int *score;

public:

	void setName(string name){
        this->name = new string(name);
    }

	string getName(){
		return *(this->name);
	}

	void setAge(int age){
		this->age = new int(age);
	}

	int getAge(){
		return *this->age;
	}

	void setScore(int score){
		this->score = new int(score);
	}

	int getScore(){
		return *this->score;
	}

	void getMsg(){
		std::cout<<"name = "<<*name<<" age = "<<*age<<" score = "<<*score<<endl;
	}

	//普通有参构造函数
	Person(string name , int age , int score);

	//普通无参构造函数
	Person(){
		cout<<"调用了无参构造函数"<<endl;
	}

	//深拷贝 在堆区重新申请内存放数据,避免重复释放内存的问题
	//拷贝构造函数 完全复制一个对象的数据,并不能修改原来的对象 所以要用const的引用
 	Person(const Person &p){
		cout<<"调用了拷贝构造函数"<<endl;

		this->age = new int(*p.age);
		this->name = new string(*p.name);
		this->score = new int(*p.score);
	 }

	//析构函数
	~Person();
};

Person::Person(string name , int age , int score)
{
	cout<<"调用了有参构造函数"<<endl;
	this->name = new string(name);
    this->age = new int(age);
    this->score = new int(score);
}

Person::~Person()
{
	//将堆区开辟的数据释放
	if (this->age != NULL) delete this->age;
	if (this->name != NULL) delete this->name;
	if (this->score != NULL) delete this->score;

	cout<<"调用了析构函数"<<endl;
}



 

int main(void)
{
	Person p1("张三",18,60);

	p1.getMsg();

	Person p2(p1);

	p2.getMsg();


	cout<<"p1的地址为"<<(int*)&p1<<endl;
	cout<<"p2的地址为"<<(int*)&p2<<endl;

	return 0;
}







