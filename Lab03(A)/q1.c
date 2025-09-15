//WAP to take check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is valid.\n");
        if (a == b && b == c) {
            printf("The triangle is equilateral.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("The triangle is isosceles.\n");
        }
        if ((a * a == b * b + c * c) ||
            (b * b == a * a + c * c) ||
            (c * c == a * a + b * b)) {
            printf("The triangle is right-angled.\n");
        }
        if (a != b && b != c && a != c) {
            printf("The triangle is scalene.\n");
        }
    } else {
        printf("The triangle is not valid.\n");
    }
    return 0;
}
