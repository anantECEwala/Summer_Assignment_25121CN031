#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    srand(time(NULL));
    secretNumber = rand() % 100 + 1;

    printf("===== Number Guessing Game =====\n");
    printf("Guess a number between 1 and 100\n");

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber) {
            printf("Your guess is too high,Try Again.\n");
        }
        else if (guess < secretNumber) {
            printf("Your guess is too low,Try Again.\n");
        }
        else {
            printf("\nYayy! You guessed the correct number.\n");
            printf("Total Attempts: %d\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}