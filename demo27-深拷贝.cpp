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

	//��ͨ�вι��캯��
	Person(string name , int age , int score);

	//��ͨ�޲ι��캯��
	Person(){
		cout<<"�������޲ι��캯��"<<endl;
	}

	//��� �ڶ������������ڴ������,�����ظ��ͷ��ڴ������
	//�������캯�� ��ȫ����һ�����������,�������޸�ԭ���Ķ��� ����Ҫ��const������
 	Person(const Person &p){
		cout<<"�����˿������캯��"<<endl;

		this->age = new int(*p.age);
		this->name = new string(*p.name);
		this->score = new int(*p.score);
	 }

	//��������
	~Person();
};

Person::Person(string name , int age , int score)
{
	cout<<"�������вι��캯��"<<endl;
	this->name = new string(name);
    this->age = new int(age);
    this->score = new int(score);
}

Person::~Person()
{
	//���������ٵ������ͷ�
	if (this->age != NULL) delete this->age;
	if (this->name != NULL) delete this->name;
	if (this->score != NULL) delete this->score;

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







