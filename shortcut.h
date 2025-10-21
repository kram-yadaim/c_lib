#pragma once
#ifndef SHORTCUT_H
#define SHORTCUT_H

// print num
void print(int num);
// print underscore to space
void underscore();
// clear the cmd mid code
void clear();

// input arrays base in length
int* inputArray_i(int length);
char* inputArray_c(int length);
double* inputArray_d(int length);

// print array
void printArray_i(int arr[], int length);
void printArray_c(char arr[], int length);
void printArray_d(double arr[], int length);

// reverse the array from end to start
int* reverseArray_i(int arr[] , int length);
char* reverseArray_c(char arr[], int length);
double* reverseArray_d(double arr[], int length);

#endif
