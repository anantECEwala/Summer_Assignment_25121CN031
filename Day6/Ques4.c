#include <stdio.h>

int main()
{
    int base, exponent;
    int result = 1;
    int i;

    printf("Enter the base number (x): ");
    scanf("%d", &base);

    printf("Enter the exponent (n): ");
    scanf("%d", &exponent);

    for (i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    printf("%d raised to the power %d = %d\n",
           base, exponent, result);

    return 0;
}