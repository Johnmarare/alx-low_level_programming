#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
#endif /* SEARCH_ALGO_H */
