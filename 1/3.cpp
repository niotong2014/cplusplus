#include <iostream>
using namespace std;
int x,y=10;
int add(int e,int f){
	return e+f;
}
int main(){
	int x=20,a,b;
	a=add(x,y);
	cout<<"a="<<a<<endl;
	//::运算符可以读去全局变量
	b=add(::x,y);
	cout<<"b="<<b<<endl;
}
