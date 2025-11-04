//Develop a recursive and non-recursive function FACT (num) to find the factorial of a number, n!, defined by FACT No = 1, if n = 0. Otherwise, FACTNo = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages.
#include <stdio.h>
long fact_rec(int n) {
    return (n == 0) ? 1 : n * fact_rec(n - 1);
}
long fact_nonrec(int n) {
    long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d%d", &n, &r);
    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! 0 <= r <= n\n");
        return 0;
    }
    long C1 = fact_rec(n) / (fact_rec(r) * fact_rec(n - r));
    long C2 = fact_nonrec(n) / (fact_nonrec(r) * fact_nonrec(n - r));
    printf("\nUsing Recursive:      C(%d, %d) = %ld", n, r, C1);
    printf("\nUsing Non-Recursive:  C(%d, %d) = %ld\n", n, r, C2);
    printf("\nTable of C(n, r):\n");
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++)
            printf("%3ld ", fact_nonrec(i) / (fact_nonrec(j) * fact_nonrec(i - j)));
        printf("\n");
    }
    return 0;
}
