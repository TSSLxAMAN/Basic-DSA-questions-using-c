#include<stdio.h>
void main(){
    int n,j,x=0,y;
    printf("Enter the number : ");
    scanf("%d",&n);
    j = n;
    while (n>0)
    {
        y = n % 10;
        x = x + y*y*y;
        n = n / 10;
    }
    if (x == j)
    {
        printf("Yes, it is a Armstrong number : ",n);
    }
    else{
        printf("No, it is not a Armstrong number : ",n);
    }   
}