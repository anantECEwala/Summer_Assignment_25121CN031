#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== QUIZ APPLICATION =====\n");

    printf("\nQ1. What is Paper made from?\n");
    printf("1. Wood\n2. Cotton\n3. Silk\n4. Plastic\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1) {
        score++;
    }

    printf("\nQ2. Which language is use snake name?\n");
    printf("1. Java\n2. Python\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        score++;
    }

    printf("\nQ3. What does Earth has in abundant?\n");
    printf("1. Volcanos\n2. Humans\n3. Water\n4. Trees\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        score++;
    }

    printf("\n===== RESULT =====\n");
    printf("Your Score = %d/3\n", score);

    if (score == 3) {
        printf("Excellent!You knows all\n");
    } else if (score == 2) {
        printf("Good Job! You can do better\n");
    } else if (score == 1) {
        printf("Keep Practicing! Don't give up\n");
    } else {
        printf("Better Luck Next Time! You can do it!\n");
    }

    return 0;
}