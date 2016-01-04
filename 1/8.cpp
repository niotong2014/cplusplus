#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	//new和delete配对使用，c语言中使用malloc和free。c++也可以使用malloc和free
	int *p = new int[10];
	if(p == NULL){
		cout<<"Memory allocation failure!"<<endl;
		exit(1);
	}else{
		cout<<"动态申请的内存空间首地址为："<<p<<endl;
		delete [] p;
		return 0;
	}
}
