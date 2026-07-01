#include <stdio.h>

int main()
{
    int rows, row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (row = rows; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }

        printf("\n");
    }

    return 0;
}