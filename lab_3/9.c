// WAP in C to input marks of five subjects C-programming, Physics, Maths, Applied
// Mechanics and Basic electrical. Display whether the student passed or failed. Take
// F.M=100 and P.M.=40 For passed students calculate percentage and grade according
// to following:
// Percentage >= 90% : A
// Percentage >=80% : B
// Percentage >= 70% : C
// Percentage >= 60% : D
// Percentage >= 40% : E

#include <stdio.h>

int main() {
    int cProgramming, physics, maths, appliedMechanics, basicElectrical;
    const int fullMarks = 100;//const is written so that the values of these variable will not be modified accidently
    const int passMarks = 40;
    int totalMarks, percentage;
    char grade;

    printf("Enter marks for C Programming: ");
    scanf("%d", &cProgramming);

    printf("Enter marks for Physics: ");
    scanf("%d", &physics);

    printf("Enter marks for Maths: ");
    scanf("%d", &maths);

    printf("Enter marks for Applied Mechanics: ");
    scanf("%d", &appliedMechanics);

    printf("Enter marks for Basic Electrical: ");
    scanf("%d", &basicElectrical);

    // Calculate total marks
    totalMarks = cProgramming + physics + maths + appliedMechanics + basicElectrical;

    // Check if the student passed or failed
    if (cProgramming >= passMarks && physics >= passMarks && maths >= passMarks &&
        appliedMechanics >= passMarks && basicElectrical >= passMarks) {
        printf("Result: Passed\n");

        // Calculate percentage
        percentage = (totalMarks * 100) / (5 * fullMarks);

        // Determine the grade based on the percentage
        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 80) {
            grade = 'B';
        } else if (percentage >= 70) {
            grade = 'C';
        } else if (percentage >= 60) {
            grade = 'D';
        } else if (percentage >= 40) {
            grade = 'E';
        }

        printf("Percentage: %d%%\n", percentage);
        printf("Grade: %c\n", grade);
    } else {
        printf("Result: Failed\n");
    }

    return 0;
}
