#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

class father
{

public:
	father(/* args */);
	~father();
};

father::father(/* args */)
{
	cout<<"���ø���Ĺ��캯��"<<endl;
}

father::~father()
{
	cout<<"���ø������������"<<endl;
}

class son : public father
{
public:
	son(/* args */);
	~son();
};

son::son(/* args */)
{
	cout<<"��������Ĺ��캯��"<<endl;
}

son::~son()
{
	cout<<"�����������������"<<endl;
}



int main(void)
{
	son s;


	

	return 0;
}







