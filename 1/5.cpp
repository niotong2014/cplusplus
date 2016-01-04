#include <iostream>
using namespace std;
int main(){
	int a = 34;
	int b = 56;
	int c = 1;

	const int* p1;
	p1 = &a;

	int* const p2 = &b;
	cout<<"p1改变之前的值："<<*p1<<endl;
	p1= &c;
	//*p1 = 1;a=1; //这两项操作都不行，p1对应地址中存储的值不能变
	cout<<"p1改变之后的值："<<*p1<<endl;
	
	cout<<"p2改变之前的值："<<*p2<<endl;
	//p2 = &c; //这项操作不行，p2的值不能改变，也就是指针p2指向的地址不能变
	*p2 = 1;
	cout<<"p2改变之后的值："<<*p2<<endl;
	b = 2;
	cout<<"p2改变之后的值："<<*p2<<endl;

	return 0;
}
