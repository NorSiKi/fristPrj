#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct people
{
	short age;
	string name;
	short weight;
	short height;
	/* data */
};

void print(people a);

int main(void)
{
	people a;
	a.age = 18;
	a.name = "����";
	a.height = 168;
	a.weight = 160;

	print(a);
	return 0;
}

void print(people a)
{
	cout<<"����Ϊ:"<<a.name<<endl;
	cout<<"����Ϊ:"<<a.age<<endl;
	cout<<"����Ϊ:"<<a.weight<<endl;
	cout<<"���Ϊ:"<<a.height<<endl;

}



