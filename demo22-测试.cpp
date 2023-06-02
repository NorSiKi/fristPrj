#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Cube
{
private:
	double c_length;
	double c_width;
	double c_height;
public:

	void setSize(double length , double width , double height){
		c_length = length;
		c_width = width;
		c_height = height;
	}

	double getLength(void){
		return c_length;
	}

	double getWidth(void){
		return c_width;
	}

	double getHeight(void){
		return c_height;
	}
	
	bool isSame(Cube c1){
		if (c1.getHeight() == c_height && c1.getLength() == c_length && c1.getWidth()== c_width)
		{
			return true;
			/* code */
		} 
		return false;
	}

	double getVolume(){
		return c_width * c_length * c_height;
	}

	double getArea(){
		return 2*(c_width * c_height + c_width * c_length + c_length * c_height);
	}

	void setLength(double length){
	    c_length = length;
	}  

	void setWidth(double width){
	    c_width = width;
	}

	void setHeight(double height){
	    c_height = height;
	}
};


bool isSame(Cube c1 , Cube c2){
	if(c1.getHeight() == c2.getHeight() && c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth()){
		return true;
	}
	return false;
}


int main(void)
{
	Cube c1 , c2;
	c1.setSize(5,10,20);
	c2.setSize(5,10,20);

	cout<<"c1 的面积为:"<<c1.getArea()<<" c1 的体积为:"<<c1.getVolume()<<endl;
	cout<<"c2 的面积为:"<<c2.getArea()<<" c2 的体积为:"<<c2.getVolume()<<endl;

	cout<<(c1.isSame(c2) ? "c1 等于 c2" : "c1 不等于 c2")<<endl;
	cout<<(isSame(c1,c2) ? "c1 等于 c2" : "c1 不等于 c2")<<endl;

	return 0;
}








