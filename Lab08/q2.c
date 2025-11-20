//Perform pointer arithmetic (increment and decrement) on pointers of different data types. Observe how the memory addresses change and the effects on data access.

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

    printf("Original Addresses:\n");
    printf("p1 (int):   %p\n", (void*)p1);
    printf("p2 (float): %p\n", (void*)p2);
    printf("p3 (char):  %p\n", (void*)p3);
    printf("p4 (double):%p\n\n", (void*)p4);

    p1++;  
    p2++;  
    p3++;  
    p4++;  

    printf("After Increment:\n");
    printf("p1 (int):   %p\n", (void*)p1);
    printf("p2 (float): %p\n", (void*)p2);
    printf("p3 (char):  %p\n", (void*)p3);
    printf("p4 (double):%p\n\n", (void*)p4);

    p1--;  
    p2--;  
    p3--;  
    p4--;  

    printf("After Decrement (Back to Original):\n");
    printf("p1 (int):   %p\n", (void*)p1);
    printf("p2 (float): %p\n", (void*)p2);
    printf("p3 (char):  %p\n", (void*)p3);
    printf("p4 (double):%p\n", (void*)p4);

    return 0;
}
