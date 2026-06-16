#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n-------------------------");
    printf("\n    ARRAY ELEMENTS");
    printf("\n-------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n-------------------------");
    printf("\n   DUPLICATE ELEMENTS");
    printf("\n-------------------------\n");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d\n", arr[i]);
                break;
            }
        }
    }

    printf("-------------------------\n");

    return 0;
}