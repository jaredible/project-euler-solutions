#include <stdio.h>

int main() {
    int i, n = 1000, sum = 0;

    for (i = 0; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("sum: %d\n", sum);

    return 0;
}