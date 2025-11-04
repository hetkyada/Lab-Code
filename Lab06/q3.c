//Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the Fibonacci sequence up to num.
#include <stdio.h>
int FIBO(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return FIBO(num - 1) + FIBO(num - 2);
}
int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++)
        printf("%d ", FIBO(i));
    printf("\n");
    return 0;
}
