/*************************************************************************
	> File Name: insert_sort.c
	> Author: regan
	> Mail: regan@thtfit.com 
	> Created Time: Thu 03 Mar 2016 09:55:05 AM CST
 ************************************************************************/

#include<stdio.h>
#include "sort.h"
int main(){
	int * array = NULL;
	array = create_array();
	random_array(array);
	print_array(array);
	print_array(array);
	free_array(array);
	return 0;
}
