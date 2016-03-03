/*************************************************************************
	> File Name: make_array.c
	> Author: regan
	> Mail: regan@thtfit.com 
	> Created Time: Thu 03 Mar 2016 09:57:27 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include"sort.h"

//make array
int * create_array(void){
	int * array_desc = NULL;
	array_desc = malloc(sizeof(int) * ARRAY_NUM);
	memset(array_desc,0,ARRAY_NUM);
	return array_desc;
}

//random the array
void random_array(int * array_pr){
	int i = 0;
	srand((unsigned int)time(NULL));
	for(i=0;i<ARRAY_NUM;i++){
		* array_pr =rand() % 100;
		array_pr++;
	}
}

//print the array
void print_array(int * array_pr){
	int i = 0;
	printf("the array is: ");
	for(i=0;i<ARRAY_NUM;i++){
		printf("%d ",*array_pr);
		array_pr++;
	}
	printf("\n");
}

//free the array's memery
void free_array(int * array_pr){
	free(array_pr);
}

//swap the element of array
void swap_element(int * a,int * b){
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
