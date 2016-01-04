#include<iostream>
using namespace std;
#include "eg4Person.h"
int main(){
	Person Input();
	void Output(Person);
	char name[20],sex;
	int age;
	Person p1,p2;
	cout<<"Enter a person's name,age and sex:";
	cin>> name >>age>>sex;
	p1.Register(name,age,sex);
	cout<<"Person 1:\t";
	Output(p1);
	p2 = Input();
	cout<<"Person 2:\t";
	Output(p2);
	return 0;
}
Person Input()
{
	Person t;
	t.Register("Alice",20,'f');
	return t;
}
void Output(Person t)
{
	char str[20];
	t.Getname(str);
	cout<<str<<'\t'<<t.Getage()<<'\t'<<t.Getsex()<<endl;
}
