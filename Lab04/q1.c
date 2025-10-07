//Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
#include<stdio.h>
int globalVar=10;
void display();
void modify();
int main(){
    printf("Inside main(): globalVar=%d\n",globalVar);
    display();
    modify();
    printf("After modify() in main(): globalVar=%d\n",globalVar);
    return 0;
}
void display(){
    printf("Inside display(): globalVar=%d\n",globalVar);
}
void modify(){
    globalVar=20;
    printf("Inside modify(): globalVar changed to %d\n",globalVar);
}
