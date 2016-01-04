#include <iostream>
using namespace std;

class B{
	int x,y;
public:
	B(){
		x = y = 0;
		cout<<"B()\n";
	}
	B(int i,int j){
		x = i;
		y = j;
		cout<<"B(int,int)\n";
	}
	void Show(){
		cout<<"x="<<x<<",y="<<y<<endl;
	}
};
class A{
	B b;
public:
	A(){
		cout<<"A()"<<endl;
	}
	A(int i,int j){
		cout<<"A(int,int)"<<endl;
	}
	void Show(){
		b.Show();
	}
};
int main()
{
	A a1;
	a1.Show();
	cout<<endl;
	A a2(3,6);
	a2.Show();
	return 0;
}
