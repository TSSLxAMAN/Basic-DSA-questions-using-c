#include <stdio.h>
void main()
{
    int arr[3][3], i, n, j, max, x, y = 0;
    printf("Enter the elements in matrix : \n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is : \n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            x = arr[0][0];
            if (x < arr[i][j])
            {
                x = arr[i][j];
            }
        }
    }
    printf("The maximum element of the matrix  is %d", x);
}