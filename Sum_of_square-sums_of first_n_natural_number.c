#include<stdio.h>
void main(){
    int n,i,j,x = 0;
    printf("Enter inter upto which you want the sum of square : ");
    scanf("%d",&n);
    for ( i = 0; i <= n; i++)
    {
        x = x + (i*i);
    }
    printf("The sum of square of first %d natural number is : %d",n,x);
}