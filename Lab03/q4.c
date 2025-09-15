//According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.
#include <stdio.h>
int main(){
    int year, days=0, day;
    printf("Enter year: ");
    scanf("%d",&year);
    for(int y=1;y<year;y++){
        if((y%400==0)||((y%4==0)&&(y%100!=0)))
            days+=366;
        else
            days+=365;
    }
    day=(days+1)%7;
    switch(day){
        case 0: printf("Sunday\n"); break;
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
    }
    return 0;
}
