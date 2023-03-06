#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */
void print_diagsums(int *a, int size) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < size; i++) {
        // add the ith element of the ith row to the first sum
        sum1 += a[i*size + i];
        // add the ith element of the (size-i-1)th row to the second sum
        sum2 += a[(size-i-1)*size + i];
    }
    printf("Diagonal sum 1: %d\n", sum1);
    printf("Diagonal sum 2: %d\n", sum2);
}
