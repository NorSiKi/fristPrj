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

	//��ͨ�вι��캯��
	Person(string name , int age , int score);

	//��ͨ�޲ι��캯��
	Person(){
		cout<<"�������޲ι��캯��"<<endl;
	}

	//�������캯�� ��ȫ����һ�����������,�������޸�ԭ���Ķ��� ����Ҫ��const������
 	Person(const Person &p){
		cout<<"�����˿������캯��"<<endl;
		this->age = p.age;
		this->name = p.name;
		this->score = p.score;
	 }

	//��������
	~Person();
};

Person::Person(string name , int age , int score)
{
	cout<<"�������вι��캯��"<<endl;
	this->name = name;
    this->age = age;
    this->score = score;
}

Person::~Person()
{
	cout<<"��������������"<<endl;
}

Person * getPerson(void){
	Person *a = new Person("����",16,70); 
	return a;
}

Person getPerson2(){
	Person a = Person("�����ͽ",20,59);
	cout<<"�����ڵ�Person��ַ"<<(int*)(&a)<<endl;
	return a;
}

void setPerson(Person a){
	a.setAge(100);
}

 

int main(void)
{
	Person a = getPerson2();
	cout<<"�������Person��ַ"<<(int*)(&a)<<endl;
	a.getMsg();

	// setPerson(a);

	// a.getMsg();

	return 0;
}







