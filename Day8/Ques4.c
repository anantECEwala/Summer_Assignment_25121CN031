#include <stdio.h>

int main()
{
    int rows, row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (row = 1; row <= rows; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }

        printf("\n");
    }

    return 0;
}