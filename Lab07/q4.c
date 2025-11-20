//Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. Write a C program to display your present address.

#include <stdio.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[20];
};

int main() {
    union Address addr;

    printf("Enter your present address: ");
    scanf(" %[^\n]", addr.home_address);

    printf("\nYour Present Address:\n");
    printf("%s\n", addr.home_address);

    return 0;
}
