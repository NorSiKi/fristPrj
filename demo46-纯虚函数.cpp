#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

//ֻҪ�����涨����һ�����麯��,��ô��������һ��������
//�������ص�
//	1.�������޷���ʵ����
//	2.����������������д����Ĵ��麯��,����Ҳ���ڳ�����
class Animal
{
public:
	//���麯��
	virtual void speak() = 0;
};

class Cat : public Animal
{
public:
	void speak()
	{
		cout<<"cat speak"<<endl;
	}
};

int main(void)
{
	
	
	return 0;
}





