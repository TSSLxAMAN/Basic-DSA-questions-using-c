#include<stdio.h>
void main(){
    int x,y;
    printf("Enter the dividend : ");
    scanf("%d",&x);
    printf("Enter the divisor : ");
    scanf("%d",&y);
    if (x % y == 0)
    {
        printf("Yes %d is Divisible by %d",x,y);
    }
    else{
        printf("No %d is Divisible by %d",x,y);
    }
}