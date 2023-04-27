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
 * @file stats.h
 * @brief Interface for stats.c
 *
 * @author John Keeling
 * @date 04/27/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief  A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param mean mean value of array
 * @param median median value of array
 * @param minimum minimum value of array
 * @param maximum maximum value of array
 * 
 * @return void
 */
void print_statistics(unsigned char mean, unsigned char median, unsigned char minimum, unsigned char maximum);

/**
 * @brief  Given an array of data and a length, prints the array to the screen
 * 
 * @param numbers Array of number
 * @param count size of number array
 *
 * @return void
 */
void print_array(unsigned char* numbers, unsigned int count);

/**
 * @brief  Given an array of data and a length, returns the median value
 * 
 * @param numbers Array of number
 * @param count size of number array
 *
 * @return unsigned char
 */
unsigned char find_median(unsigned char* numbers, unsigned int count);

/**
 * @brief  Given an array of data and a length, returns the mean value
 * 
 * @param numbers Array of number
 * @param count size of number array
 *
 * @return void 
 */
unsigned char find_mean(unsigned char* numbers, unsigned int count);

/**
 * @brief  Given an array of data and a length, returns the maximum value
 * 
 * @param numbers Array of number
 * @param count size of number array
 *
 * @return unsigned char
 */
unsigned char find_maximum(unsigned char* numbers, unsigned int count);

/**
 * @brief  Given an array of data and a length, returns the minimum value
 * 
 * @param numbers Array of number
 * @param count size of number array
 *
 * @return unsigned char
 */
unsigned char find_minimum(unsigned char* numbers, unsigned int count);

/**
 * @brief  Given an array of data and a length, sort the array from largest to smallest
 * 
 * @param numbers Array of number
 * @param count size of number array
 *
 * @return void
 */
void sort_array(unsigned char* numbers, unsigned int count);

#endif /* __STATS_H__ */
