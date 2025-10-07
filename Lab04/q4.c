//Declare a static local variable inside a function. Observe how its value persists across function calls.
#include<stdio.h>
void staticTest(){
static int count=0;
count++;
printf("Inside staticTest(): count=%d\n",count);
}
int main(){
staticTest();
staticTest();
staticTest();
staticTest();
return 0;
}
