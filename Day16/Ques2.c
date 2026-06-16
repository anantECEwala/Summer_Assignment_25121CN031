#include <stdio.h>

int main()
{
    int n, i, j;
    int maxFrequency = 0, maxElement;

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

    for(i = 0; i < n; i++)
    {
        int frequency = 0;

        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                frequency++;
            }
        }

        if(frequency > maxFrequency)
        {
            maxFrequency = frequency;
            maxElement = arr[i];
        }
    }

    printf("\n\n-------------------------");
    printf("\n MAXIMUM FREQUENCY ELEMENT");
    printf("\n-------------------------\n");

    printf("Element   : %d\n", maxElement);
    printf("Frequency : %d\n", maxFrequency);

    printf("-------------------------\n");

    return 0;
}