//WAP to generate the following set of output.b.
                                                1
                                               1 1 
                                              1 2 1
                                             1 3 3 1
                                            1 4 6 4 1
#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        int val = 1;

        for (int space = 0; space < rows - i - 1; space++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
