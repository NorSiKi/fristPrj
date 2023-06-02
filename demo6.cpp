#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

int add(int,int);

int main(void)
{
	int a = 4 , b = 5;

	cout<<add(a,b)<<endl;
	
	
	
	return 0;
}

int add(int a,int b)
{
	return a+b;
}
 
