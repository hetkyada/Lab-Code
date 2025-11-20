//Write a C program that uses functions to perform the following operations:
//a.    Reading a complex number.
//b.    Writing a complex number.
//c.     Addition and subtraction of two complex numbers

#include <stdio.h>

struct Complex {
    float real;
    float imag;
}

struct Complex readComplex() {
    struct Complex c;

    printf("Enter real part: ");
    scanf("%f", &c.real);

    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);

    return c;
}

void writeComplex(struct Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

struct Complex subtractComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

int main() {
    struct Complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    c1 = readComplex();

    printf("\nEnter second complex number:\n");
    c2 = readComplex();

    sum = addComplex(c1, c2);
    diff = subtractComplex(c1, c2);

    printf("\nFirst number: ");
    writeComplex(c1);

    printf("Second number: ");
    writeComplex(c2);

    printf("\nSum: ");
    writeComplex(sum);

    printf("Difference: ");
    writeComplex(diff);

    return 0;
}
