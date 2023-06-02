#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<stdio.h>

using namespace std;

template<class T>
class MyArray {
private:
	T *address;
	int capacity;
	int length;
	
	void init()
	{
		for(int i = 0; i < getCap();i++){
			address[i] = -1;
		}
	}
	
public:
	MyArray(int cap = 0) {
		this->capacity = cap;
		this->address = new T[cap];
		this->length = 0;
		init();
	}
	
	MyArray(MyArray<T> &arr)
	{
		if(this->address != NULL){
			delete[] this->address;
			this->address = NULL;
			this->capacity = 0;
			this->length = 0;
		}
		
		this->address = new T[arr.getCap()];
		this->capacity = arr.getCap();
		init();
		
		for(int i=0;i < arr.getLength();i++){
			setValue(i,arr.valueof(i));
		} 
	}
	
	MyArray()
	{
		this->capacity = 0;
		this->address = NULL;
		this->length = 0;
		init();
	}

	~MyArray() {
		if(this->address != NULL){
			delete[] this->address;
			this->address = NULL;
		}
	}
	
	T valueof(int index)
	{
		return (address[index]);
	}
	
	void setValue(int index , T t)
	{
		if(address[index] == -1){
			this->length ++; 
		}
		address[index] = t;
	}
	
	T& operator[](int index)
	{
		return this->address[index];
	}
	
	int getLength(void)
	{
		return this->length;
	}
	
	int getCap()
	{
		return this->capacity;
	}
	
	void printAll(string msg)
	{
		cout<< msg << ": [";
		for(int i=0;i < getCap();i++){
			cout << " " << address[i];
		}
		cout<< "]" <<endl;
	}
	
	MyArray<T>& operator=(MyArray<T>& arr)
	{ 
		if(this->address != NULL){
			delete[] this->address;
			this->address = NULL;
			this->capacity = 0;
			this->length = 0;
		}
		
		this->address = new T[arr.getCap()];
		this->capacity = arr.getCap();
		init();
		this->capacity = arr.getCap();
		for(int i=0;i< arr.getLength();i++){
			setValue(i,arr.valueof(i));
		} 
		
		return *this;
	}
};

int main(void){
	MyArray<int> arr1(10);
	MyArray<int> arr2(10);
	MyArray<int> arr3(10);
	MyArray<int> arr4(10);
	
	MyArray<double> arr5(10);
	MyArray<double> arr6(10);
	
	for(int i=0;i< 10 ;i++){
		arr1.setValue(i,i);
		arr5.setValue(i,i*5.5);
	}
	
	arr4 = arr3 = arr2 = arr1;
	
	arr6 = arr5;
	
	arr1.printAll("arr1");
	
	cout<< arr6[5];
	
	arr2.printAll("arr2");
	
	arr3.printAll("arr3");
	
	arr4.printAll("arr4");
	
	arr5.printAll("arr5");
	
	arr6.printAll("arr6");

	return 0;
}
