#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (j = 0; str[j] != '\0'; j++) {
        if (freq[(unsigned char)str[j]] > 1) {
            printf("First repeating character: %c\n", str[j]);
            return 0;
        }
    }

    printf("No repeating character found.\n");
    return 0;
}
