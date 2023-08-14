### ----------------------------------------------------------------------------
### Copyright (C) 2017 by Alex Fosdick - University of Colorado
###
### Redistribution, modification or use of this software in source or binary
### forms is permitted as long as the files maintain this copyright. Users are
### permitted to modify this and use it to learn about the field of embedded
### software. Alex Fosdick and the University of Colorado are not liable for any
### misuse of this material. 
###
### ----------------------------------------------------------------------------
### Coursera - University of Colorado Boulder
### 
### Introduction to Embedded Systems Software and Development Environments
### 
### Week 1 Application Assignment
### 
### ----------------------------------------------------------------------------
### Author : Kevin Bourne
### Date : 10 Aug 2023
### ----------------------------------------------------------------------------

## Purpose

This programm analyzes an array of unsigned char data items and report these analytics :
 - maximum
 - minimum
 - mean
 - median

In addition, it reorders the data set from large to small.

The data are then printed in a nice formatted presentation.

## Usage

./stats.out

## Limits

All statistics are rounded down to the nearest integer.


### ----------------------------------------------------------------------------
### Assignment text
### ----------------------------------------------------------------------------

You are to write a couple of functions that can analyze an array of unsigned char data items and
report analytics on the maximum, minimum, mean, and median of the data set. In addition,
you will need to reorder this data set from large to small. All statistics should be rounded down
to the nearest integer. After analysis and sorting is done, you will need to print that data to the
screen in nicely formatted presentation. You will need to submit a version controlled repository
of these 3 files.

    stats.c - Implementation file for your C-programming code
    stats.h -  Header file for your C-programming code
    README.md -  Includes information on the author and the project


You will need to write eight functions in the stats.c implementation file:

    **main()** : The main entry point for your program
    **print_statistics()** - A function that prints the statistics of an array including minimum, maximum, mean, and median.
    **print_array()** -  Given an array of data and a length, prints the array to the screen
    **find_median()** - Given an array of data and a length, returns the median value
    **find_mean()** -  Given an array of data and a length, returns the mean
    **find_maximum()** -  Given an array of data and a length, returns the maximum
    **find_minimum()** -  Given an array of data and a length, returns the minimum
    **sort_array()** - Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
