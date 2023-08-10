###******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
###*****************************************************************************

#*****************************************************************************
# Author : Kevin Bourne
# Date : 10 Aug 2023
#*****************************************************************************

# Purpose

This programm analyzes an array of unsigned char data items and report these analytics :
 - maximum
 - minimum
 - mean
 - median

In addition, it reorders the data set from large to small.

The data are then printed in a nice formatted presentation.

# Usage

./stats.out

# Limits

All statistics are rounded down to the nearest integer.
