#include <stdio.h>

int main() {
    // Read three integers from the user
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // Print the lengths of the sides
    printf("Lengths: [%d, %d, %d]\n", a, b, c);


    // Check if all sides are equal
    if (a == b && b == c) {
        printf("Type: Equilateral\n");
        printf("All sides are of the same length.\n");
    }

    // Check if exactly two sides are equal
    else if (a == b || b == c || a == c) {
        printf("Type: Isosceles\n");
        printf("Exactly two sides are equal.\n");
    }

    // Check if it forms a valid triangle with all sides of different lengths
    else if (a + b > c && a + c > b && b + c > a) {
        printf("Type: Scalene\n");
        printf("All sides are of different lengths.\n");
    }


    // If none of the above conditions are met, it's an invalid shape
    else {
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.\n");
    }
    
    return 0;
}
