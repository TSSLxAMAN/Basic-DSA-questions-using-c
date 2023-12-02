#include<stdio.h>
#include<string.h>
void main(){
    int x,y,i,sum = 0;
    printf("Enter the digit : ");
    scanf("%d",&x);
    while (x>0)
    {
        y = x % 10;
        x = x / 10;
        sum = sum + y;
    }
    printf("The sum of the digits of %s is : %d",x,sum);
}