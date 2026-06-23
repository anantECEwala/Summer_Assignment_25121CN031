#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, max = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
        }
    }

    if (max > 0) {
        printf("Maximum occurring character(s): ");
        for (i = 0; i < 256; i++) {
            if (freq[i] == max) {
                printf("%c ", i);
            }
        }
        printf("\n");
    } else {
        printf("No characters found.\n");
    }

    return 0;
}
