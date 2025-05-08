#include <stdio.h>
int main()
{
    int arr[10], i, j, t;
    printf("Enter the Ten Number");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    printf("\n Sorted list is :\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}

