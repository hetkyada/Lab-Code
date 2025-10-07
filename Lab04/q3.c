//Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.
#include<stdio.h>
int main(){
{
int a=5;
printf("Inside first block: a=%d\n",a);
}
{
int b=10;
printf("Inside second block: b=%d\n",b);
}
return 0;
}
