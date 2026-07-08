
  #include <stdio.h>

int main() {
    int score = 0;
    int answer;

    printf("=== QUIZ APPLICATION ===\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1) Mumbai\n2) New Delhi\n3) Kolkata\n4) Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 2
    printf("\n2. Which language is used for system programming?\n");
    printf("1) Python\n2) HTML\n3) C\n4) SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 3
    printf("\n3. What is 5 + 3?\n");
    printf("1) 5\n2) 8\n3) 10\n4) 6\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Result
    printf("\n=== RESULT ===\n");
    printf("Your score: %d out of 3\n", score);

    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good job!\n");
    else
        printf("Keep practicing!\n");

    return 0;
}