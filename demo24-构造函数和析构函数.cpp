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
	return a;
}

//����������������ͬʱ����
void setPerson(Person a){

}

void setPerson(const Person & a){

}

 

int main(void)
{
	//Ĭ���޲ι��촴�� Ĭ�ϴ�������Ҫ��(),����������Ϊ����һ������������
	Person p0;

	//�вι��칹�촴��
	Person p1("����",18,88);

	//�������촴��
	Person p2(p1);

	//��������
	Person *arr = new Person[10];
	Person arr2[10];
	
	//��������������ֵ
	Person p3 = getPerson2();

	//����ָ������������ֵ
	Person * p4 = getPerson();

	//��ʾ����������
	Person p5 = Person("����",25,60);
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







