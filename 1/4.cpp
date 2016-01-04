#include <iostream>
using namespace std;
int main(){
	void * p;
	int a = 34;
	p = &a;
	//void* 的指针的强制转换
	cout<<*(int*)p<<endl;
	return 0;
}
