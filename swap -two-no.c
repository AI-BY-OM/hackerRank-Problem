

#include <stdio.h>

int main() {
    int a, b, temp;

    // Input the first value
    printf("Enter the first value: ");
    scanf("%d", &a);

    // Input the second value
    printf("Enter the second value: ");
    scanf("%d", &b);

    // Swapping the values
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("First value: %d\n", a);
    printf("Second value: %d\n", b);

    return 0;
}
