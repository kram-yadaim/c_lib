#include <stdio.h>
#include <stdlib.h>
#include "shortcut.h"

#define underscore_length 60


// clear the cmd
void clear() {
    system("cls");
}

// put space in the end of the result
void space_in_end() {
    printf("\n\n\n\n\n\n\n\n");
}

// print a number (just for speed to replace printf)
void print(int num) {
    printf("%i", num);
}

// print a long underscore row to make a start and an end -----------
void underscore() {
    for (int i = 0; i < 50; i++) {
        printf("-");
    }
    printf("\n");
}

// underscore for and or start
void underscore_s(int length) {
    for (int i = 0; i < length; i++) {
        printf("-");
    }
    printf("\n");
}

// print a num for x times
void printloop_i(int num,int times) {
    for (int i = 0; i < times; i++) {
        printf("%i -> %i\n",i, num);
    }
}

// print a char for x times
void printloop_c(char c, int times) {
    for (int i = 0; i < times; i++) {
        printf("%i -> %c\n",i, c);
    }
}

// print an array of ints
void printArray_i(int arr[] , int length) {
    underscore_s(underscore_length);
    printf("Array is -> [ ");
    for (int i = 0; i < length; i++) {
        printf("%i", arr[i]);
        if (i < length-1) printf(" , ");
    }
    printf(" ]\n");
    underscore_s(underscore_length);
}

// print an array of double
void printArray_d(double arr[], int length) {
    underscore_s(underscore_length);
    printf("Array is -> [ ");
    for (int i = 0; i < length--; i++) {
        printf("%f", arr[i]);
        if (i < length - 1) printf(" , ");
    }
    printf(" ]\n");
    underscore_s(underscore_length);
}

// print an array of chars
void printArray_c(char arr[], int length) {
    underscore_s(underscore_length);
    printf("Array is -> [ ");
    for (int i = 0; i < length; i++) {
        printf(" %c", arr[i]);
        if (i < length - 1) printf(" , ");
    }
    printf(" ]\n");
    underscore_s(underscore_length);
}

// input an intger array and return a pointer*
// example use -> int* arr = inputArray_i(length);
int* inputArray_i(int length) {
    int* arr = malloc(length * sizeof(int));

    underscore_s(underscore_length);

    printf("enter integer Array in length %i:\n", length);
    for (int i = 0; i < length; i++) {
        printf("%i -> ", i);
        scanf_s("%i", &arr[i] , sizeof(int));
    }

    clear();
    return arr; // return pointer
}

// input an char array and return a pointer
// example use -> char* arr = inputArray_c(length);
char* inputArray_c(int length) {
    char* arr = malloc(length * sizeof(char));
    
    underscore_s(underscore_length);
    
    printf("enter char Array in length %i:\n", length);
    for (int i = 0; i < length; i++) {
        printf("%i ->", i);
        scanf_s(" %c", &arr[i], sizeof(char));  
    }
    
    clear();
    return arr; // return pointer
}

// input a double array and return a pointer
// example use -> double* arr = inputArray_d(length);
double* inputArray_d(int length) {
    double* arr = malloc(length * sizeof(double));

    underscore_s(underscore_length);

    printf("enter Array in length %i:\n", length);
    for (int i = 0; i < length; i++) {
        printf("%i -> ", i);
        scanf_s("%f", &arr[i] , sizeof(double));
    }

    clear();
    return arr; // return pointer
}

// reverse integer array
// example use -> arr = reverseArray_i(arr , length)
// dont need to redecler the array pointer
int* reverseArray_i(int arr[] , int length) {
    for (int i = 0, j = length - 1; i < length / 2; i++, j--) {
        int placeholder = arr[i];
        arr[i] = arr[j];
        arr[j] = placeholder;
    }
    return arr;
}

// reverse char array
// example use -> arr = reverseArray_c(arr , length)
// dont need to redecler the array pointer
char* reverseArray_c(char arr[], int length) {
    for (int i = 0, j = length - 1; i < length / 2; i++, j--) {
        char placeholder = arr[i];
        arr[i] = arr[j];
        arr[j] = placeholder;
    }
    return arr;
}

// reverse float array
// example use -> arr = reverseArray_d(arr , length)
// dont need to redecler the array pointer
double* reverseArray_d(double arr[], int length) {
    for (int i = 0, j = length - 1; i < length / 2; i++, j--) {
        double placeholder = arr[i];
        arr[i] = arr[j];
        arr[j] = placeholder;
    }
    return arr;
}