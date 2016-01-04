#include <iostream>
using namespace std;
struct Date{
	int year,month,day;
};
int main(){
	Date a;
	cout<<"please input year month day:"<<endl;
	cin>>a.year>>a.month>>a.day;
	//c++过程化设计,以流程的思想，如下以流程的思想来打印
	cout<<a.year<<"年"<<a.month<<"月"<<a.day<<"日"<<endl;

	return 0;
}
