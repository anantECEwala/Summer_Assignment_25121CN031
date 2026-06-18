#include <stdio.h>

int main()
{
    int n1, n2, i, j;
    int found;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("\nEnter %d elements of the first array:\n", n1);

    for(i = 0; i < n1; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the size of the second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("\nEnter %d elements of the second array:\n", n2);

    for(i = 0; i < n2; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr2[i]);
    }

    printf("\n-------------------------");
    printf("\n     UNION OF ARRAYS");
    printf("\n-------------------------\n");

    for(i = 0; i < n1; i++)
    {
        printf("%d ", arr1[i]);
    }

    for(i = 0; i < n2; i++)
    {
        found = 0;

        for(j = 0; j < n1; j++)
        {
            if(arr2[i] == arr1[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            printf("%d ", arr2[i]);
        }
    }

    printf("\n-------------------------\n");

    return 0;
}