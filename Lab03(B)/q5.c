//Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit.
#include <stdio.h>

int main() {
    int limit = 100000;

    for (int i = 1; i <= limit; i++) {
        int count = 0;

        for (int a = 1; a * a * a < i; a++) {
            for (int b = a + 1; a * a * a + b * b * b <= i; b++) {
                if (a * a * a + b * b * b == i) {
                    count++;
                }
            }
        }

        if (count >= 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}
