#include <stdio.h>
void main()
{
    int n, i;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (size_t i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}