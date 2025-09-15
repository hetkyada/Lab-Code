//WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.(a) all variables should be declared integer type.
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &a);
    b = (a * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %d\n", b);
    return 0;
}
