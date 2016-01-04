#include <iostream>
using namespace std;

//缺省函数，方向从左至右
void f(int,int = 0);
void f1(){
	void f(int = 5,int =5);
	f();	//f(5,5);
	f(6);	//f(6,5);
	::f(5);	//f(5,0);
}
void f(int x,int y){
	cout<<"x="<<x <<",y="<<y<<endl;
}
void f2(){
	f(3);	//f(3,0);
}
int main(){
	f1();
	f2();
	return 0;
}
