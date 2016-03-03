/*************************************************************************
	> File Name: insert_sort.c
	> Author: regan
	> Mail: regan@thtfit.com 
	> Created Time: Thu 03 Mar 2016 09:55:05 AM CST
 ************************************************************************/

#include<stdio.h>
#include "sort.h"
void selection_sort(int *);
int main(){
	int * array = NULL;
	array = create_array();
	random_array(array);
	print_array(array);
	selection_sort(array);
	print_array(array);
	free_array(array);
	return 0;
}

void selection_sort(int * array_pr){
	int min = 0;
	int i = 0,j = 0;
	for(i = 0;i<ARRAY_NUM;i++){
		min = i;
		for(j = i+1;j<ARRAY_NUM;j++){
			if(*(array_pr+min)> *(array_pr+j)){
				min = j;
			}
		}
		if(min != i){
			swap_element(array_pr+i,array_pr+min);
		}
	}
}
