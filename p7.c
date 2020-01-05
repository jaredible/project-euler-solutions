#include <stdio.h>

#define N 10001

int main() {
    int i = 2, count, c;
    for (count = 1; count <= N; i++) {
        for (c = 2; c < i; c++) {
            if (i % c == 0) {
                break;
            }
        }
        if (c == i) {
            //printf("i: %i, count: %i, c: %i\n", i, count, c);
            count++;
        }
    }

    printf("10001st prime: %i\n", c);

    return 0;
}