#include <stdio.h>

int main() {
    int units;
    float bill;

    scanf("%d", &units);

    if (units < 0 || units > 1000000) {
        printf("Invalid Input!\n");
        return 1;
    }

    if (units <= 100) {
        bill = units * 5.0;
    } else if (units <= 300) {
        bill = 100 * 5.0 + (units - 100) * 7.0;
    } else {
        bill = 100 * 5.0 + 200 * 7.0 + (units - 300) * 10.0;
    }

    if (bill <= 1200) {
        bill *= 0.9; 
    }

    printf("The electricity bill is: %.2f.\n", bill);

    return 0;
}
