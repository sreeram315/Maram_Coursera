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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the minimum, maximum, mean and median of the array of elements
 * 
 *  This function takes an input of array and its size, finds the minimum, maximum, mean and median of 
 *  the provided array of elements and prints them on the screen.
 * 
 *@param 1) Array whose statistics are to be printed, 2) size of the same array
 *@return void
 */
void print_statistics(unsigned char *a,int n)

/**
 * @brief Prints the contents of an array
 * 
 *  This function takes an input of array and prints all the contents of the array in the same order. 
 *  
 * 
 *@param 1) Array whose values to be printed, 2) size of the same array
 *@return void
 */

void print_array(unsigned char *a, int n)

/**
 * @brief Returns the median of given array
 * 
 *  This function takes an input of array and its size, finds the median and returns the value. 
 *  
 * 
 *@param 1) Array whose median to be calculated, 2) size of the same array
 *@return median of given array
 */

int find_median(unsigned char *a,int n)

/**
 * @brief Returns the mean of given array
 * 
 *  This function takes an input of array and its size, finds the mean and returns the value. 
 *  
 * 
 *@param 1) Array whose mean to be calculated, 2) size of the same array
 *@return median of given array
 */

int find_mean(unsigned char *a,int n)

/**
 * @brief Returns the maximum number of given array
 * 
 *  This function takes an input of array and its size, finds the maximum and returns the value. 
 *  
 * 
 *@param 1) Array whose maximum is to be calculated, 2) size of the same array
 *@return maximum of given array
 */

int find_maximum(unsigned char *a, int n)

/**
 * @brief Returns the minimum of given array of elements
 * 
 *  This function takes an input of array and its size, finds the minimum and returns the value. 
 *  
 * 
 *@param 1) Array whose minimum is to be calculated, 2) size of the same array
 *@return minimum of the given array
 */

int find_minimum(unsigned char *a, int n)
/**
 * @brief Sorts the given array in descending order
 * 
 *  This function takes an input of array and its size, sorts it from largest to smallest in the  
 *  address it already is(original array)
 * 
 *@param 1) Array whose values to be calculated, 2) size of the same array
 *@return void
 */
void sort_array(unsigned char *a,int n)

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
