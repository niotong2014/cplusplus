/*************************************************************************
	> File Name: insert_sort.c
	> Author: regan
	> Mail: regan@thtfit.com 
	> Created Time: Thu 03 Mar 2016 09:55:05 AM CST
 ************************************************************************/

#include<stdio.h>
#include "sort.h"
void insert_sort(int *);

int main(){
	int * array = NULL;
	array = create_array();
	random_array(array);
	print_array(array);
	insert_sort(array);
	print_array(array);
	free_array(array);
	return 0;
}

void insert_sort(int * array_pr){
	int i = 0,j = 0;
	int current;
	for(i = 1; i < ARRAY_NUM;i++){
		current = *(array_pr + i);
		j = i - 1;
		while(j >= 0 && *(array_pr+j)>current){
			*(array_pr+j+1) = *(array_pr+j);
			j--;
		}
		*(array_pr+j+1) = current;
	}
}
