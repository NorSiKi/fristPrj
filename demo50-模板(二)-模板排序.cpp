#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<stdio.h>

using namespace std;

class Person{
public:
	int age;
	string name;
public:
	Person(int age , string name){
		this->age = age;
		this->name = name;
	}
	
	Person(void)
	{
		this->age = 0;
		this->name = ""; 
	}
	
	~Person() {

	}
	
	Person(const Person & p)
	{
		this->age = p.age;
		this->name = p.name;
	}
	
	void setNameAge(string name , int age)
	{
		this->age = age;
		this->name = name;
	}
	
	bool operator>(const Person &p1) {
		if(this->age > p1.age){
			return true;
		}
		return false;
	}
	
	bool operator<(const Person &p1) {
		if(this->age < p1.age){
			return true;
		}
		return false;
	}
	
	Person& operator=(const Person &p)
	{
		this->age = p.age;
		this->name = p.name;
		return *this;
	}
};

ostream & operator<<(ostream &cout , Person & p)
{
	cout<< "name : " << p.name << " age: " << p.age << " ";
	return cout;
}

template <class T> void quickSort(T a[] , int left , int right)
{
	int i = left , j = right;
	T pivot , temp;
	pivot = a[(left + right) / 2];
	while(i <= j){
		while(a[i] < pivot){
			i++;
		}
		while(a[j] > pivot){
			j--;
		}
		if(i <= j){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	if(left < j){
		quickSort(a,left,j);
	}
	if(i < right){
		quickSort(a,i,right);
	}
}


template<class T , class M> void func(T a , M b)
{
	cout<< a << b <<endl;
}

int main(void)
{
    double arr[5] = {1.1,0.12,5.0,99.23,3.1415};
    int arr2[5] = {9,4,1,45,3};
//    Person people[5] = {{"张三",18},{"李四",50},{"王五",26} , {"赵六",12} , {"谢旺",19} }; 
	Person people[5];
	people[0].setNameAge("张三",18);
	people[1].setNameAge("李四",59);
	people[2].setNameAge("王五",26);
	people[3].setNameAge("赵六",12);
	people[4].setNameAge("阿旺",19); 
    
    quickSort<double>(arr,0,4);
    quickSort<int>(arr2,0,4);
    quickSort<Person>(people,0,4); 
    
    for(int i = 0 ; i < 5 ; i++ ){
		cout<< "arr[" << i << "] = " << arr[i] <<endl;
	}
	
	for(int i = 0 ; i < 5 ; i++ ){
		cout<< "arr2[" << i << "] = " << arr2[i] <<endl;
	}
	
	for(int i = 0 ; i < 5 ; i++ ){
		cout<< "people[" << i << "] = { " << people[i] << "}" <<endl;
	}

	func<int,string>(8,"hello");
	

    return 0;
}
