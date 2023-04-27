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
}

/* ----------------------------------------------------------------*/

unsigned char find_median(unsigned char* numbers, unsigned int count) {
}

/* ----------------------------------------------------------------*/

unsigned char find_minimum(unsigned char* numbers, unsigned int count) {
}

/* ---------------------------------------------------------------- */

unsigned char find_maximum(unsigned char* numbers, unsigned int count) {
}

/* ---------------------------------------------------------------- */

void print_statistics( unsigned char mean, unsigned char median, unsigned char minimum, unsigned char maximum) {
}

/* ---------------------------------------------------------------- */

void print_array(unsigned char* numbers, unsigned int count) {
}

/* ---------------------------------------------------------------- */

static void swap(unsigned char* numA, unsigned char* numB ) {
}

/* ---------------------------------------------------------------- */

void sort_array(unsigned char* numbers, unsigned int count) {
}