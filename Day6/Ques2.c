#include <stdio.h>

int main()
{
    int decimal, remainder;
    int binary = 0;
    int base = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0)
    {

        remainder = decimal % 2;

        binary = binary + (remainder * base);

        base = base * 10;

        decimal = decimal / 2;
    }

    printf("Binary Number = %d\n", binary);

    return 0;
}