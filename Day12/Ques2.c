#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;

    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = num;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += power(remainder, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
