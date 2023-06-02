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
void change(people *a);

int main(void)
{
	people a;
	a.age = 18;
	a.name = "张三";
	a.height = 168;
	a.weight = 160;

	print(a);

	change(&a);

	print(a);
	return 0;
}

void change(people *a)
{
	a->age = 20;
	a->height = 180;
	a->weight = 145;

}

void print(people a)
{
	cout<<"姓名为:"<<a.name<<endl;
	cout<<"年龄为:"<<a.age<<endl;
	cout<<"体重为:"<<a.weight<<endl;
	cout<<"身高为:"<<a.height<<endl;

}



