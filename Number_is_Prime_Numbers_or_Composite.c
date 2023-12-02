#include <stdio.h>
void main()
{
    int num, i, j, n, x = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1 is not either prime or composite.");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                x++;
            }
        }
        if (x == 2)
        {
            printf("%d is a prime number.",n);
        }
        else
        {
            printf("%d is a composite number.",n);
        }
    }
}