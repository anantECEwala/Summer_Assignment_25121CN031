#include <stdio.h>

int main()
{
    int decimal;
    int binary = 0;
    int base = 1;
    int remainder;
    int setBits = 0;
    int originalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    originalNumber = decimal;

    while (decimal != 0)
    {
        remainder = decimal % 2;
        binary = binary + (remainder * base);
        base = base * 10;
        decimal = decimal / 2;
    }

    printf("Binary Number = %d\n", binary);

    int binaryCopy = binary;

    while (binaryCopy != 0)
    {
        if (binaryCopy % 10 == 1)
        {
            setBits++;
        }

        binaryCopy = binaryCopy / 10;
    }

    printf("Number of Set Bits in %d = %d\n",
           originalNumber, setBits);

    return 0;
}