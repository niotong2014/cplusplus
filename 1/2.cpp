#include <iostream>
using namespace std;

class Date{
	int year,month,day;
	public:
	void Input(){
		cout<<"please input year month day:"<<endl;
		cin>>year>>month>>day;
	}
	void Output(){
		cout<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
	}
};

int main(){
	Date a;
	//以面对对象的思想来读取数据输出数据
	a.Input();
	a.Output();
	return 0;
}
