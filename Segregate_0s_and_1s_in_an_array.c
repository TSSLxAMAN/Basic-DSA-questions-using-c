#include <stdio.h>
void main()
{
    int binary[32], i, j, n, x = 0, temp;
    printf("Enter the no. of elements in binary array : ");
    scanf("%d", &n);
    printf("Enter the binary array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &binary[i]);
    }

    printf("The Bianry arrya is : [ ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", binary[i]);
    }
    printf("]");

    for (size_t i = 0; i < n; i++)
    {
        if (binary[i] != 0 && binary[i] != 1)
        {
            x = 1;
        }
    }
    if (x == 1)
    {
        printf("\nThe Elements you enter are not binary digits");
    }
    else
    {
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (binary[j] < binary[j + 1])
                {
                    temp = binary[j];
                    binary[j] = binary[j + 1];
                    binary[j + 1] = temp;
                }
            }
        }
        printf("\nThe segregate of 0s and 1s are : [");
        for (i = 0; i < n; i++)
        {
            printf("%d ", binary[i]);
        }
        printf("]");
    }
}