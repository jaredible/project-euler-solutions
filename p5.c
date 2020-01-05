#include <stdio.h>

#define MIN 1
#define MAX 10

int getNumber(int min, int max) {
    int i, n = 1;
    while (1) {
        for (i = min; i <= max; i++) {
            printf("i: %i, r: %i | ", i, (n % i));
        }
        printf("n: %i\n", n);
        //printf("n: %i\n", n);
        n++;
    }
}

int main() {
    printf("n: %i\n", getNumber(MIN, MAX));

    return 0;
}