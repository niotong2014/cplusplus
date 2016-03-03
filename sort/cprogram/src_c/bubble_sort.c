/*************************************************************************
	> File Name: insert_sort.c
	> Author: regan
	> Mail: regan@thtfit.com 
	> Created Time: Thu 03 Mar 2016 09:55:05 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#include "sort.h"

void bubble_sort(int *);
int main(){
	int * array = NULL;
	array = create_array();
	random_array(array);
	print_array(array);
	bubble_sort(array);
	print_array(array);
	free_array(array);
	return 0;
}

void bubble_sort(int * array_pr){
	int i = 0;
	bool swapped;
	do{
		swapped = false;
		for(i = 0;i< ARRAY_NUM-1;i++){
			if(*(array_pr+i) > *(array_pr+i+1)){
				swap_element(array_pr+i,array_pr+i+1);
				swapped = true;
			}
		}
	} while(swapped);
}
