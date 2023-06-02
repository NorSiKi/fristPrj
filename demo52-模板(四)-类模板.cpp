#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<stdio.h>

using namespace std;

template<class Type1 , class Type2>
class Base
{
public:
	Type1 *a;
	Type2 *b;

public:
	Base()
	{
		this->a = NULL;
		this->b = NULL;
	}

	Base(const Base &b)
	{
		if(b.a != NULL) this->a = new Type1(*(b.a));
		if(b.b != NULL) this->b = new Type2(*(b.b));
	}
	
	Base(Type1 aa , Type2 bb)
	{
		
		this->a = new Type1(aa);
		
		this->b = new Type2(bb);
	}

	~Base()
	{
		if (this->a != NULL)
		{
			delete this->a;
			this->a = NULL;
		}

		if (this->b != NULL)
		{
			delete this->b;
			this->b = NULL;
		}
	}

};

template<class Type1 , class Type2>
ostream & operator<<(ostream &cout , Base<Type1,Type2> &b)
{
	cout<< "a = " << *b.a << " b = " << *b.b;
	return cout;
}

int main(void)
{
    Base<int,double> base1(10,3.14);
    Base<double,double> base2(1.5,1.234);
    Base<string,double> base3("string",1.234);
    Base<char,double> base4('a',5.50); 
	
	
	cout<< base1 <<endl;
	cout<< base2 <<endl; 
	cout<< base3 <<endl;
	cout<< base4 <<endl;
	

    return 0;
}
