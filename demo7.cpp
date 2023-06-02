#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

void change(int *);

int main(void)
{
	int b = 10;
	
	cout<<"修改前b = "<<b<<endl;
	change(&b);
	cout<<"修改后b = "<<b<<endl;
	return 0;
}

void change(int * a)
{
	*a = 5;
}


