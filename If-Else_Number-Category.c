#include <stdio.h>

// Function to check if a number is a perfect square
int isPerfectSquare(int num) {
    int i;
    for (i = 1; i * i <= num; i++) {
        if (i * i == num) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int N;
    scanf("%d", &N);

    // Category A: N is divisible by 2 and 3 but not by 5
    if (N % 2 == 0 && N % 3 == 0 && N % 5 != 0) {
        printf("A");
    }
    // Category B: N > 20 and is the product of two distinct primes in [2,11]
    else if (N > 20 && (N == 21 || N == 22 || N == 33 || N == 35 || N == 55 || N == 77)) {
        printf("B");
    }
    // Category C: N is a two-digit number and divisible by either 3 or 7 but not both
    else if (N >= 10 && N <= 99 && ((N % 3 == 0) ^ (N % 7 == 0))) {
        printf("C");
    }
    // Category D: N is a perfect square less than 200
    else if (N > 0 && N < 200 && isPerfectSquare(N)) {
        printf("D");
    }
    // Category E: If none of the above conditions are satisfied
    else {
        printf("E");
    }

    return 0;
}
