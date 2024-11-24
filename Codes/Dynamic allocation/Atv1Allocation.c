/* 1. Create a program that:
a) Dynamically allocate an array of 5 integers;
b) Ask the user to enter the 5 numbers in the allocated space;
c) Show the 5 values on the screen;
d) Free up the allocated memory; */

#include <stdio.h>
#include  <stdlib.h>

int main() {


    int i, *array;
    array = (int*)calloc(5, sizeof(int));

    if(!array) {
        printf("Error: Unallocated memory");
        return 0;
    }

    for(i = 0; i < 5; i++) {
        printf("Enter the %d number: ", (i+1));
        scanf("%d", &array[i]);
    }
    for(i = 0; i < 5; i++) {
        printf("\nThe number in Array[%d] is: %d", i, array[i]);
    }

    free(array);
    array = NULL;

    return 0;
}