#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>


using namespace std;


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

	//ǳ����
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
	//���������ٵ������ͷ�
	cout<<"��������������"<<endl;
}



 

int main(void)
{
	Person p1("����",18,60);

	p1.getMsg();

	Person p2(p1);

	p2.getMsg();


	cout<<"p1�ĵ�ַΪ"<<(int*)&p1<<endl;
	cout<<"p2�ĵ�ַΪ"<<(int*)&p2<<endl;

	return 0;
}







