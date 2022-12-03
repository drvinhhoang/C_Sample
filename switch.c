#include <stdio.h>

int main() {

    char grade;

    printf("\n Enter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        /* code */
        printf("perfect!\n");
        break;
    case 'B':
        /* code */
        printf("you did good!\n");
        break;
    case 'C':
        /* code */
        printf("you did ok!\n");
        break;
    case 'D':
        /* code */
        printf("need improve!\n");
        break;
    default:
        printf("Please enter valid grade!");
        break;
    }
}