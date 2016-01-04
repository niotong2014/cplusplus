#include <iostream>

using namespace std;
//内联函数，由编译器处理，和define不同，它会检查语法以及参数
inline int max(int a,int b){
	return a>b?a:b;
}

int main(){
	int a = 1,b = 0;
	cout << max(a++,b) <<endl;
	cout <<"a="<<a << ",b="<<b <<endl;
	return 0;
}

//在下面这个程序中,使用define，结果却是2 a=3,b=0;
/*
#include <iostream>
using namespace std;
#define max(a,b) ((a)>(b)?(a):(b))

int main(){
	int a = 1,b = 0;
	cout << max(a++,b) <<endl;
	cout <<"a="<<a<<",b="<<b<<endl;
	return 0
}
*/
