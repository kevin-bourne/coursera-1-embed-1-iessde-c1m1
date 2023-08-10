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
#include <stdbool.h>
#include <assert.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/* unit tests */
bool test_all();

void main() {

  uchar test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                      114, 88,   45,  76, 123,  87,  25,  23,
                      200, 122, 150, 90,   92,  87, 177, 244,
                      201,   6,  12,  60,   8,   2,   5,  67,
                        7,  87, 250, 230,  99,   3, 100,  90};

  assert(test_all());

  print_statistics(test, SIZE);
  sort_array(test, SIZE);
  print_array(test, SIZE);
}

/* Prints the statistics of an array */
void print_statistics(uchar* arr, size_t arr_size) {
  uchar median = find_median(arr, arr_size);
  uchar mean = find_mean(arr, arr_size);
  uchar maximum = find_maximum(arr, arr_size);
  uchar minimum = find_minimum(arr, arr_size);

  printf("------------------------------------------------------\n");
  printf("Statistics of array (rounded to the nearest integer): \n");
  printf("------------------------------------------------------\n");
  printf("  - median\t=\t%hhu\n", median);
  printf("  - mean \t=\t%hhu\n", mean);
  printf("  - maximum\t=\t%hhu\n", maximum);
  printf("  - minimum\t=\t%hhu\n", minimum);
  printf("\n");

  return;
}

/* Prints an array to the screen */
void print_array(uchar* arr, size_t arr_size) {
  printf("-----------------\n");
  printf("Array\n");
  printf("-----------------\n");
  if ( !arr ){
    printf("<null array>\n");
  } else if ( arr_size == 0 ){
    printf("<empty array>\n");
  } else {
    const size_t row_size = 10;
    const size_t col_size = arr_size / row_size + 1;
    for ( size_t i = 0; i < row_size; ++i ){
      for ( size_t j = 0; j < col_size; ++j ){
        size_t idx = i + j*row_size;
        if ( idx < arr_size ){
          printf("%2zu => %3hhu\t|\t", idx, arr[idx]);
        }
      }
      printf("\n");
    }
  }
  printf("\n");
}

/* Returns the median value of an arr */
uchar find_median(uchar* arr, size_t arr_size) {
  return 0U;
}

/* Returns the mean of an arr */
uchar find_mean(uchar* arr, size_t arr_size) {
  return 0U;
}

/* Helper function to return the boundary of an arr given a comparator */
uchar find_boundary(uchar* arr, size_t arr_size, bool (comparator)(uchar, uchar)) {
  uchar res = 0;
  if(arr && arr_size > 0) {
    res = arr[0];
    for(size_t i = 1; i < arr_size; ++i) {
      uchar current = arr[i];
      if(comparator(current, res)) {
        res = current;
      }
    }
  }
  return res;
}

/* Helper function min */
bool min_comparator(uchar x, uchar y) {
  return (x < y);
}

/* Helper function max */
bool max_comparator(uchar x, uchar y) {
  return (x > y);
}

/* Returns the maximum of an arr */
uchar find_maximum(uchar* arr, size_t arr_size) {
  return find_boundary(arr, arr_size, max_comparator);
}

/* Returns the minimum of an arr */
uchar find_minimum(uchar* arr, size_t arr_size) {
  return find_boundary(arr, arr_size, min_comparator);
}

/*  Sort an array from largest to smallest in place */
void sort_array(uchar* arr, size_t arr_size) {
  return;
}

/* -------------------------------------------------------------------------- */
/* Unit tests                                                                 */
/* -------------------------------------------------------------------------- */

#define TEST_SIZE (5)

/* -------------------------------------------------------------------------- */
bool test_find_boundary() {
  bool res = false;
  /* Case 1 : null array with arbitrary size */
  /* the size must be != 0 to make sure that the right branch is tested */
  uchar* null_arr = NULL;
  size_t null_arr_size = 999;
  res = ( find_maximum(null_arr, null_arr_size) == 0 );
  if ( !res ){
    return res;
  }
  res = ( find_minimum(null_arr, null_arr_size) == 0 );
  if ( !res ){
    return res;
  }

  /* the following array is used for the rest of this test suite */
  uchar test_arr[TEST_SIZE] = { 3, 1, 5, 2, 4 };

  /* Case 2 : array, but size is set to 0 */
  size_t zero_size = 0;
  res = ( find_maximum(test_arr, zero_size) == 0 );
  if ( !res ){
    return res;
  }
  res = ( find_minimum(test_arr, zero_size) == 0 );
  if ( !res ){
    return res;
  }

  /* Case 3 : normal case */
  res = ( find_maximum(test_arr, TEST_SIZE) == 5 );
  if ( !res ){
    return res;
  }

  res = ( find_minimum(test_arr, TEST_SIZE) == 1 );
  if ( !res ){
    return res;
  }

  return true;
}

/* -------------------------------------------------------------------------- */
bool test_all() {
  printf("------------------------------------------------------\n");
  printf("test_all...\n");

  bool res = false;

  /* ----------------------------------------------------- */
  res = test_find_boundary();
  if ( !res ){
    printf("test_all...FAILED\n");
    return res;
  }

  printf("test_all...OK\n");
  printf("------------------------------------------------------\n\n");
  return true;
}
