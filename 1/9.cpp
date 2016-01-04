#include <iostream>
using namespace std;

int main(){
	int i = 5,& ri = i;
	ri+= 5;
	cout<< i<< endl;
	int *p = &ri,j =ri;
	*p += 5;
	cout << i <<","<<j<<endl;
	return 0;
}
