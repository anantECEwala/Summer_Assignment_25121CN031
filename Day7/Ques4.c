#include <stdio.h>

int reversedNumber = 0;

int reverseNumber(int number)
{
    if (number == 0)
    {
        return reversedNumber;
    }

    reversedNumber = reversedNumber * 10 + (number % 10);

    return reverseNumber(number / 10);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Reversed Number = %d\n", reverseNumber(number));

    return 0;
}