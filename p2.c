#include <stdio.h>

int main() {
    int n = 4000000, fib1 = 1, fib2 = 2, sum = 0;

    while (1) {
        if (fib2 % 2 == 0) {
            sum += fib2;
        }

        if (fib2 > n) {
            break;
        }

        //printf("i: %i, fib1: %i, fib2: %i\n", i, fib1, fib2);

        int temp = fib2;
        fib2 += fib1;
        fib1 = temp;
    }

    printf("sum: %i\n", sum);

    return 0;
}