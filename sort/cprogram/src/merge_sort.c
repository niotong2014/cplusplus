/*************************************************************************
	> File Name: insert_sort.c
	> Author: regan
	> Mail: regan@thtfit.com 
	> Created Time: Thu 03 Mar 2016 09:55:05 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "sort.h"

void merge_sort(int *,int);
int main(){
	int * array = NULL;
	array = create_array();
	random_array(array);
	print_array(array);
	merge_sort(array,ARRAY_NUM);
	print_array(array);
	free_array(array);
	return 0;
}

void merge_sort(int * array_pr,int num){
	int i = 0;
	int a=0;
	int m=0,n=0;
	int * temppr = NULL;
	i = num/2;
	if(i>1){
		merge_sort(array_pr,i);
	}
	if((num-i)>1){
		merge_sort(array_pr+i,num-i);
	}
	temppr = malloc(sizeof(int)*num);
	for(a=0;a < num;a++){
		if(*(array_pr)<*(array_pr+m))
		{
			*(temppr+a) = *(array_pr);
			array_pr = array_pr + 1;
		}else{
			*(temppr+a) = *(array_pr+);
		}
	}
	memcpy(array_pr,temppr,sizeof(int)*num);
}
