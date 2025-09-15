//WAP using ternary operator, the user should input the length and breadth of three rectangles, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.
#include <stdio.h>
int main(){
    int n,i,length,breadth,perimeter;
    int maxP=0,rectNo=0;
    printf("Enter number of rectangles: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter length and breadth of rectangle %d: ",i);
        scanf("%d %d",&length,&breadth);
        perimeter=2*(length+breadth);
        if(perimeter>maxP){
            maxP=perimeter;
            rectNo=i;
        }
    }
    printf("The rectangle with the highest perimeter is Rectangle %d with perimeter = %d\n",rectNo,maxP);
    return 0;
}
