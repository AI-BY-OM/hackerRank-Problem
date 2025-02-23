#include <stdio.h>

int main() {
    int h;      
    float c;   
    int t;      
    scanf("%d %f %d", &h, &c, &t);

    int conditionsMet = 0;
    if (h > 50) conditionsMet++;
    if (c < 0.7) conditionsMet++;
    if (t > 5600) conditionsMet++;

    int grade;
    if (conditionsMet == 3) {
        grade = 10;
        printf("The grade of the steel is: %d\n", grade);
        printf("All of the conditions met.\n");
    } else if (conditionsMet == 2) {
        if (h > 50 && c < 0.7) {
            grade = 9;
        } else if (c < 0.7 && t > 5600) {
            grade = 8;
        } else {
            grade = 7;
        }
        printf("The grade of the steel is: %d\n", grade);
        printf("Two conditions met.\n");
    } else if (conditionsMet == 1) {
        grade = 6;
        printf("The grade of the steel is: %d\n", grade);
        printf("Only one condition met.\n");
    } else {
        grade = 5;
        printf("The grade of the steel is: %d\n", grade);
        printf("None of the conditions met.\n");
    }

    return 0;
}
