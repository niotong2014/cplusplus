/*************************************************************************
	> File Name: 8queue_demo.c
	> Author: regan
	> Mail: regan@thtfit.com 
	> Created Time: 2016年02月29日 星期一 23时25分10秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>
//#include "8queen.h"
bool check(char a[][]){
}

int main(){
	int i=0,j=0;
	int num = 0;
	char board[8][8];
	i=j=0;
	memset(board,'0',sizeof(board));
	for(i=0;i<8;i++){
		board[0][i]='1';
		for(j=0;j<8;j++){
			if(check(board)){
				board[j][i]='1';
				i++;
				j=0;
			}
			if(i==8){
				printf("8queen printf num:%d\n",num++);
				for(int a=0;a<8;a++){
					for(int b=0;b<8;a++){
						printf("%c ",board[a][b]);
					}
					printf("\n");
				}
		}
	}
	memset(board,'0',sizeof(board));
}
}
