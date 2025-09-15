//WAP a C program to calculate the area and perimeter of a rectangle based on its length and width. User should provide input for length and breadth.(b) all variables should be declared float type.
#include <stdio.h>
int main() {
    float a, b, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &a);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &b);
    area = a * b;
    perimeter = 2 * (a + b);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    return 0;
}
