//Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.
#include<stdio.h>
int globalVar=10;
void testFunction(){
int localVar=5;
printf("Inside testFunction(): globalVar=%d\n",globalVar);
printf("Inside testFunction(): localVar=%d\n",localVar);
}
int main(){
printf("Inside main(): globalVar=%d\n",globalVar);
testFunction();
return 0;
}
