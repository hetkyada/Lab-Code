//WAP to generate the following set of output.    a.
                                                     1
                                                    2 3
                                                   4 5 6

#include <stdio.h>

int main() {
    int rows, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}
