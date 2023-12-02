#include<stdio.h>
void main(){
    int n,i,x = 0,y = 0;
    printf("Enter the number = ");
    scanf("%d",&n);
    for (size_t i = 0; i < n; i++)
    {
        if (i*i == n)
        {
            x = 1;
            y = i;
        }
    }
    if (x == 1)
    {
        printf("Yes, it is a perfect square of %d",y);
    }
    else{
        printf("No, it is not a perfect square");
    }
    
}