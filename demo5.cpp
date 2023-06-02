#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(void)
{
	srand((int)time(0));
	int arr[21];
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++)
	{
		arr[i] = rand()%100;
		/* code */
	}
	
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		cout<<"arr["<<i<<"] = "<<arr[i]<<"\t";
		if ((i+1)%5 == 0)
		{
			cout<<"\n";
		}
		
		/* code */
	}

	cout<<endl;
	
	int i = 0,j = sizeof(arr)/sizeof(arr[0]) - 1,temp;
	while (i<=j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		cout<<"arr["<<i<<"] = "<<arr[i]<<"\t";
		if ((i+1)%5 == 0)
		{
			cout<<"\n";
		}
		
		/* code */
	}
	
	
	
	return 0;
}
 
