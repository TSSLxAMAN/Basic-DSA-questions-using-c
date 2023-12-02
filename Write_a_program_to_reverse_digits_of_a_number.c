#include <stdio.h>
void main()
{
    int num, i, x, n, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    while (num > 0)
    {
        x = num % 10;
        num = num / 10;
        sum = (sum * 10) + x;
    }
    printf("The Reversed number is : %d", sum);
}