#include <cstring>
using namespace std;
class Person{
	char name[20];
	int age;
	char sex;
public:
	void Register(const char *,int,char);
	void Getname(char *);
	int Getage();
	char Getsex();
};
void Person::Register(const char *s ,int ag,char sx){
	strcpy(name,s);
	age=ag;
	sex=sx;
}
void Person::Getname(char *s){
	strcpy(s,name);
}
int Person::Getage(){
	return age;
}
char Person::Getsex(){
	return sex;
}
