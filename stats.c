/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stat.c
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Kevin Bourne
 * @date 10 Aug 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  uchar test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                      114, 88,   45,  76, 123,  87,  25,  23,
                      200, 122, 150, 90,   92,  87, 177, 244,
                      201,   6,  12,  60,   8,   2,   5,  67,
                        7,  87, 250, 230,  99,   3, 100,  90};

  print_statistics(test, SIZE);
  sort_array(test, SIZE);
  print_array(test, SIZE);
}

/* Add other Implementation File Code Here */


/******************************************************************************/

/* Prints the statistics of an array */
void print_statistics(uchar* arr, size_t arr_size) {
  return;
}

/* Prints an array to the screen */
void print_array(uchar* arr, size_t arr_size) {
  return;
}

/* Returns the median value of an arr */
uchar find_median(uchar* arr, size_t arr_size) {
  return 0U;
}

/* Returns the mean of an arr */
uchar find_mean(uchar* arr, size_t arr_size) {
  return 0U;
}

/* Returns the maximum of an arr */
uchar find_maximum(uchar* arr, size_t arr_size) {
  return 0U;
}

/* Returns the minimum of an arr */
uchar find_minimum(uchar* arr, size_t arr_size) {
  return 0U;
}

/*  Sort an array from largest to smallest in place */
void sort_array(uchar* arr, size_t arr_size) {
  return;
}
