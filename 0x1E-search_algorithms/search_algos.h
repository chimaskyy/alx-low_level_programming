#ifndef SEARCH_H_
#define SEARCH_H_
#include <stddef.h>
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int search(int *array, size_t size, int value, size_t lower_b, size_t higher_b);
void print_array(int *array, size_t first, size_t last);	
/*int findmatch(int *array, int size);*/

#endif
