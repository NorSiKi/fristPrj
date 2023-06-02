#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

class father
{
	friend class son;
private:
	int a;
protected:
	int b;
public:
	int c;
	father(/* args */);
	~father();
};

father::father(/* args */)
{
}

father::~father()
{
}

class son : public father
{
private:
	/* data */
public:
	void func(){
		a = 10;
		b = 10;
		c = 10;
	}
	son(/* args */);
	~son();
};

son::son(/* args */)
{
}

son::~son()
{
}



int main(void)
{
	


	

	return 0;
}







