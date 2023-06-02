#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Circle{
private:
	static const double PI = 3.14;
	double radius;

public:

	double getArea(){
		return PI * 2 * radius;
	}

	void setRadius(double a){
		radius = a;
	}
	static double getPI(void){
		return PI;
	}
};


class Student
{
private:
	string name;
	string stu_id;
public:
	void setName(string a){
		name = a;
	}
	void setStuId(string a){
		stu_id = a;
	}
	

	string getName(void){
		return name;
	}

	string getStuId(void){
		return stu_id;
	}

	string getMassage(void){
		return "ĞÕÃû: " + name + " id: " + stu_id;
	}
};



int main(void)
{
	Student s1;
	s1.setName("ÕÅÈı");
	s1.setStuId("123456");

	cout<<s1.getMassage()<<endl;

	return 0;
}








