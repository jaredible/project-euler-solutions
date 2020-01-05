#include <stdio.h>

int main() {
    long n = 600851475143, largest = 2;

    long f = 3;
    while (f <= n) {
        //printf("f: %lu, n: %lu\n", f, n);
        if (n % f == 0) {
            //printf("f: %lu\n", f);
            if (f > largest) {
                largest = f;
            }
            n /= f;
        } else {
            f += 2;
        }
    }

    printf("largest: %lu\n", largest);

    return 0;
}