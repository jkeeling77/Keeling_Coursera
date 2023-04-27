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
 * @file stats.c
 * @brief Main driver module for week1 assignment
 *
 * @author John Keeling
 * @date 04/27/2023
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  unsigned char mean, median, minimum, maximum;

  mean = find_mean(test, SIZE);
  median = find_median(test, SIZE);
  minimum = find_minimum(test, SIZE);
  maximum = find_maximum(test, SIZE);

  print_statistics(mean, median, minimum, maximum);
  print_array(test, SIZE);
}

/* ----------------------------------------------------------------*/

unsigned char find_mean(unsigned char* numbers, unsigned int count) {
   unsigned char mean = 0;
   unsigned int sum = 0;

   if( numbers != NULL && count > 0 ) {
       for(int i = 0; i < count; i++ ) {
          //printf( "pre increment: sum[%u], array[%d]: %u\n", sum, i, numbers[i]);
          sum +=  numbers[i];
          //printf("post mean increment: %u\n\n", mean);
       }

       //printf("pre mean calculation: mean[%u], count[%u]", sum, count);
       mean = sum/count;
   }
   else {
      printf("IN: find_mean() ERROR: numbers == NULL[%s] or count[%u] <= 0\n", numbers == NULL ? "NULL" : "!NULL", count);
   }

   return mean;
}

/* ----------------------------------------------------------------*/

unsigned char find_median(unsigned char* numbers, unsigned int count) {
   unsigned char median = 0;

   if( numbers != NULL && count > 0 ) {
       sort_array(numbers, count);
       median = numbers[count/2];
   }
   else {
      printf("IN: find_median() ERROR: numbers == NULL[%s] or count[%u] <= 0\n", numbers == NULL ? "NULL" : "!NULL", count);
   }

   return median;
}

/* ----------------------------------------------------------------*/

unsigned char find_minimum(unsigned char* numbers, unsigned int count) {
   unsigned char minimum = 0;

   if( numbers != NULL && count > 0 ) {
       for(int i = 0; i < count; i++ ) {
          if( i == 0 ) {
            minimum = numbers[i];
          }
          minimum = minimum <= numbers[i] ? minimum: numbers[i];
       }
   }
   else {
      printf("IN find_minimum() ERROR: numbers == NULL[%s] or count[%u] <= 0\n", numbers == NULL ? "NULL" : "!NULL", count);
   }

   return minimum;
}

/* ---------------------------------------------------------------- */

unsigned char find_maximum(unsigned char* numbers, unsigned int count) {
   unsigned char maximum = 0;

   if( numbers != NULL && count > 0 ) {
       for(int i = 0; i < count; i++ ) {
          if( i == 0 ) {
            maximum = numbers[i];
          }
          maximum = maximum > numbers[i] ? maximum : numbers[i];
       }
   }
   else {
      printf("IN find_maximum() ERROR: numbers == NULL[%s] or count[%u] <= 0\n", numbers == NULL ? "NULL" : "!NULL", count);
   }

   return maximum;
}

/* ---------------------------------------------------------------- */

void print_statistics( unsigned char mean, unsigned char median, unsigned char minimum, unsigned char maximum) {

   printf("array statistics\n");
   printf("  mean:    %u\n", mean);
   printf("  median:  %u\n", median);
   printf("  minimum: %u\n", minimum);
   printf("  maximum: %u\n", maximum);
}

/* ---------------------------------------------------------------- */

void print_array(unsigned char* numbers, unsigned int count) {

    if( numbers != NULL && count > 0 ) {
       printf("array values\n");
       for(int i = 0; i < count; i++ ) {
          printf("array[%d]: %u\n", i, numbers[i]);
       }
    }
    else {
      printf("IN find_maximum() ERROR: numbers == NULL[%s] or count[%u] <= 0\n", numbers == NULL ? "NULL" : "!NULL", count);
    }
}

/* ---------------------------------------------------------------- */

static void swap(unsigned char* numA, unsigned char* numB ) {
   unsigned char temp = *numA;

   *numA = *numB;
   *numB = temp;
}

/* ---------------------------------------------------------------- */
/* - Selection sort algorithm                                     - */
/* ---------------------------------------------------------------- */

void sort_array(unsigned char* numbers, unsigned int count) {
    int i, j, min_idx;
  
    for (i = 0; i < count - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < count; j++)
            if (numbers[j] < numbers[min_idx])
                min_idx = j;
  
        swap(&numbers[min_idx], &numbers[i]);
    }
}