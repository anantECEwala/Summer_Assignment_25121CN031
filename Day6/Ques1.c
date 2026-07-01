#include <stdio.h>

int main()
{
    int binary, remainder;
    int decimal = 0;
    int base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0)
    {
        remainder = binary % 10;

        decimal = decimal + (remainder * base);

        base = base * 2;

        binary = binary / 10;
    }

    printf("Decimal Number = %d\n", decimal);

    return 0;
}