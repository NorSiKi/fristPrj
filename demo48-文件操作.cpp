#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>

using namespace std;


class Base
{
public:
	int a;

	ofstream & operator<<(ofstream &ofs)
	{
		ofs<< this->a;
		return ofs;
	}
};

//д�ļ� 
void test01()
{
	ofstream ofs;
	int a = 100; 
	Base B;

	ofs.open("F:/Desk/test.txt",ios::out);

	ofs<<"a =" << a;

	ofs.close();
}

//���ļ�
void test02()
{
	ifstream ifs;
	ifs.open("./test.txt",ios::in);
	char buff[1024] = {0}; 
	if(ifs.is_open()){
		
//		��һ�ֶ��ļ� 
//		while(ifs >> buff){
//			cout<< buff ;
//		}

		while(ifs.getline(buff,1024)){
			cout<< buff <<endl;
		} 
		
	} else {
		cout<< "�ļ���ʧ��" <<endl;
	}
	
	ifs.close(); 
} 


int main(void)
{
	test02();
	
	return 0;
}
