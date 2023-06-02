#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * @brief 
 * 
 * @param irq 
 * @param handler 
 * @param thread_fn 
 * @param irqflags 
 * @param devname 
 * @param dev_id 
 * @return int 
 */
int request_threaded_irq(unsigned int irq, irq_handler_t handler,
			 irq_handler_t thread_fn, unsigned long irqflags,
			 const char *devname, void *dev_id);

int main(void)
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	v.push_back(50);

	v.push_back(60);

	//第一种遍历方式
//	vector<int>::iterator itBegin = v.begin();
//	vector<int>::iterator itEnd = v.end();
//
//	while(itBegin != itEnd){
//		cout<< *itBegin <<endl;
//		itBegin++;
//	}

	//第二种
	for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++){
		cout<< *it <<endl;
	}

	//第三种
	for_each(v.begin(),v.end(),[](int var){
		cout<< var <<endl;
	}); 

	return 0;
}
