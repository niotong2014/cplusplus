/*************************************************************************
	> File Name: insert_sort.c
	> Author: regan
	> Mail: regan@thtfit.com 
	> Created Time: Thu 03 Mar 2016 09:55:05 AM CST
 ************************************************************************/

#include<stdio.h>
#include "sort.h"

void quick_sort(int * ,int);
int main(){
	int * array = NULL;
	array = create_array();
	random_array(array);
	print_array(array);
	quick_sort(array,ARRAY_NUM);
	print_array(array);
	free_array(array);
	return 0;
}

void quick_sort(int * array_pr,int num){
	int i=0,j=0;
	j = num - 1;
	if(i>=j){
		return;
	}
	int comp = 0;
	comp = *array_pr;
	while(i<j){
		while(*(array_pr+j)>=comp && i<j){
			j--;
		}
		*(array_pr+i)=*(array_pr+j);
		while(*(array_pr+i)<=comp && i<j){
			i++;
		}
		*(array_pr+j)=*(array_pr+i);
	}
	*(array_pr+i) = comp;

	if(i>1)
		quick_sort(array_pr,i);
	if((num-i)>1)
		quick_sort(array_pr+i+1,num-1-i);
}
