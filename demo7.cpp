#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

void change(int *);

int main(void)
{
	int b = 10;
	
	cout<<"�޸�ǰb = "<<b<<endl;
	change(&b);
	cout<<"�޸ĺ�b = "<<b<<endl;
	return 0;
}

void change(int * a)
{
	*a = 5;
}


