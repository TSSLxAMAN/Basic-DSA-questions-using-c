#include <stdio.h>
void main()
{
    int arr[32], i, j, n, x, copy[32], temp, check = 0;
    printf("Enter the number of elements in array : ");
    scanf("%d", &n);
    printf("Enter elements in array : \n");
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is : [ ");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]");

    for (size_t i = 0; i < n; i++)
    {
        copy[i] = arr[i];
    }

    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = 0; j < n - i - 1; j++)
        {
            if (copy[j] > copy[j + 1])
            {
                temp = copy[j];
                copy[j] = copy[j + 1];
                copy[j + 1] = temp;
            }
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] == copy[i])
        {
            check = 1;
        }
    }
    if (check == 1)
    {
        printf("\nYes, it is sorted array");
    }
    else
    {
        printf("\nNo, it is not sorted arrary\nThe sorted array is : [ ");
        for (j = 0; j < n; j++)
        {
            printf("%d ", copy[j]);
        }
        printf("]");
    }
}