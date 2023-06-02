#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>


using namespace std;


class Person
{
private:
	int A;
	int B;
	int C;

public:

	int getA(){
		return this->A;
	}

	int getB(){
		return this->B;
	}

	int getC(){
		return this->C;
	}

	Person(){
		cout<<"无参构造"<<endl;
	}

	Person(int a , int b , int c) : A(a),B(b),C(c){
		cout<<"有参构造"<<endl;
	}

	Person(const Person & person){
		this->A = person.A;
		this->B = person.B;
		this->C = person.C;
	}

	~Person(){
		cout<<"析构函数调用"<<endl;
	}

	void printMSG(){
		cout<<"A = "<<A<<" B = "<<B<<" C = "<<C<<endl;
	}

};



 

int main(void)
{
	Person a(2,3,4);

	a.printMSG();

	return 0;
}







