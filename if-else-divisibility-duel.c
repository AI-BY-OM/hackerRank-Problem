#include <stdio.h>

int main() {
    long long X, Y, Z;
    // Read three integers X, Y, and Z from the user
    scanf("%lld %lld %lld", &X, &Y, &Z);

    // Check if X is divisible by both Y and Z
    if (X % Y == 0 && X % Z == 0) {
        printf("X defeats all!\n");
    // Check if X is divisible by Y only
    } else if (X % Y == 0) {
        printf("Y triumphs over X!\n");
    // Check if X is divisible by Z only
    } else if (X % Z == 0) {
        printf("Z outsmarts X!\n");
    // If X is not divisible by either Y or Z
    } else {
        printf("X remains undefeated!\n");
    }

    return 0;
}
