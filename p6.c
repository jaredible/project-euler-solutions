#include <stdio.h>

#define N 100

int main() {
    int sumSquares = N * (N + 1) * (2 * N + 1) / 6;
    int squareSum = (N * (1 + N) / 2) * (N * (1 + N) / 2);
    int d = squareSum - sumSquares;

    //printf("sumSquares: %i, squareSum: %i, d: %i\n", sumSquares, squareSum, d);

    printf("difference: %i\n", d);

    return 0;
}