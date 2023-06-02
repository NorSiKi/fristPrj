#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>

using namespace std;

template <typename T> void Myswap(T &a , T &b)
{   
    T temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    int a = 10 , b = 20;
    double c = 1.1 , d = 2.2;

    //自动类型推导
    Myswap(c,d); 
    
    //手动指定类型 
    Myswap<int>(a, b);

    cout<< "a = " << a <<endl;
    cout<< "b = " << b <<endl;
    
    cout<< "c = " << c <<endl;
	cout<< "d = " << d <<endl;

    return 0;
}
