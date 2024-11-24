/* Write a program that contains an array of integers with 5 elements.
   Using only pointer arithmetic, read this array from the keyboard and
   print twice the value of each element read. */

#include <stdio.h>

int main() {
    //Variable declaration
    int array[5], i;
    int *pArray = array;

    //Loop to receive the 5 integers
    for (i = 0; i < 5; i++) {
        printf("Enter the %d number: ", (i+1));
        scanf("%d", (pArray + i));
    }

    //Data handling loop
    printf("Double the numbers are: ");
    for (i = 0; i < 5; i++) {
        printf("%d, ", *(pArray + i) * 2);
    }

    return 0;
}