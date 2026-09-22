#include <stdio.h>

int main () {
    int grade;
    int year;
    char letterGrade;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    printf("Enter year: ");
    scanf("%d", &year);

    /*if (grade >= 90) {
        letterGrade = 'A';
    } else if (grade >= 80 && grade < 90) {
        letterGrade = 'B';
    } else if (grade >= 70 && grade < 80) {
        letterGrade = 'C';
    } else if (grade >= 60 && grade < 70) {
        letterGrade = 'D';
    } else {
        letterGrade = 'F';
    }*/

    switch (grade / 10) {
        case 10:
        case 9:
            letterGrade = 'A';
            break;
        case 8:
            letterGrade = 'B';
            break;
        case 7:
            letterGrade = 'C';
            break;
        case 6:
            letterGrade = 'D';
            break;
        default:
            letterGrade = 'F';
            break;
    }
    
    printf("Your letter grade is: %c\n", letterGrade);

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        printf("Leap Year");
    } else{
        printf("Not Leap Year");
    }


}