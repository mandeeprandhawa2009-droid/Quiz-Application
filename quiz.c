#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("================================\n");
    printf("       QUIZ APPLICATION\n");
    printf("================================\n");

    printf("\n1. Which language is used for C programming?\n");
    printf("1. Python\n2. C\n3. Java\n4. HTML\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\n2. Which function displays output in C?\n");
    printf("1. scanf()\n2. main()\n3. printf()\n4. return\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    printf("\n3. Which symbol ends a statement in C?\n");
    printf("1. .\n2. ,\n3. :\n4. ;\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);

    if (answer == 4)
        score++;

    printf("\n4. Which loop executes while a condition is true?\n");
    printf("1. while\n2. switch\n3. if\n4. break\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    printf("\n5. Which header file is required for printf()?\n");
    printf("1. math.h\n2. stdio.h\n3. string.h\n4. conio.h\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\n================================\n");
    printf("          QUIZ RESULT\n");
    printf("================================\n");
    printf("Your Score: %d out of 5\n", score);

    if (score >= 4)
        printf("Excellent Performance!\n");
    else if (score >= 2)
        printf("Good Try! Keep Practicing.\n");
    else
        printf("Keep Learning and Try Again!\n");

    printf("Thank you for participating!\n");

    return 0;
}
