#include <stdio.h>
void main()
{
    int arr[32], i, j, n, x, temp;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements in the array : \n");
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is : [ ");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The Second largest element of teh array is : %d", arr[1]);
}