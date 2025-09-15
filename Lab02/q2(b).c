//WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.(b) all variables should be declared float type.
#include <stdio.h>
int main() {
    float a, b;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &a);
    b = (a * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", b);
    return 0;
}
