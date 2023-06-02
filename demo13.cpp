#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

int * func(void);

int main(void)
{
	int *arr = func();

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
		/* code */
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout<<arr[i]<<endl;
		/* code */
	}
	
	delete[] arr;
	return 0;
}

int * func(void)
{
	return new int[10];
}



