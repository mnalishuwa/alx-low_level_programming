#ifndef search_algos_h
#define search_algos_h

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* searches for a value in an array of integers using the Linear search */
int linear_search(int *array, size_t size, int value);

/* searches for a value in array using binary search */
int binary_search(int *array, size_t size, int value);

#endif
