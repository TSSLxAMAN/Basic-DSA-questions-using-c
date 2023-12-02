#include<stdio.h>
int factorial(int n){
    int i,a = 0,b;
    if (n == 0 || n ==1)
    {
        return 1;
    }
    else{
        a = n * factorial(n-1);
    }
        return a;
    
}
void main(){
    int n,x;
    printf("Enter the number : ");
    scanf("%d",&n);
    x = factorial(n);
    printf("The factorial of %d is : %d",n,x);
}