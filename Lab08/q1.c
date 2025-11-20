// Declare different types of pointers (int, float, char, double) and initialize them with the addresses of variables. Print the values of both the pointers and the variables they point to.

#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';
    double d = 25.789;

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;
    double *p4 = &d;

    printf("Pointer p1 (int): %p, Value: %d\n", (void*)p1, *p1);
    printf("Pointer p2 (float): %p, Value: %.2f\n", (void*)p2, *p2);
    printf("Pointer p3 (char): %p, Value: %c\n", (void*)p3, *p3);
    printf("Pointer p4 (double): %p, Value: %.3f\n", (void*)p4, *p4);

    return 0;
}
