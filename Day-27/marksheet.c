 #include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    int m1, m2, m3, m4, m5, total;
    float percentage;
    char grade;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks in Subject 1: ");
    scanf("%d", &m1);

    printf("Enter Marks in Subject 2: ");
    scanf("%d", &m2);

    printf("Enter Marks in Subject 3: ");
    scanf("%d", &m3);

    printf("Enter Marks in Subject 4: ");
    scanf("%d", &m4);

    printf("Enter Marks in Subject 5: ");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 40)
        grade = 'E';
    else
        grade = 'F';

    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Student Name: %s\n", name);
    printf("-------------------------------\n");
    printf("Subject 1 : %d\n", m1);
    printf("Subject 2 : %d\n", m2);
    printf("Subject 3 : %d\n", m3);
    printf("Subject 4 : %d\n", m4);
    printf("Subject 5 : %d\n", m5);
    printf("-------------------------------\n");
    printf("Total      : %d / 500\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    if (percentage >= 40)
        printf("Result      : PASS\n");
    else
        printf("Result      : FAIL\n");

    return 0;
}
