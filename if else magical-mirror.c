#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N <= 0) {
        printf("The verdict for the number %d is: INVALID\n", N);
        return 0;
    }

    int condition1 = (N > 10 && N % 2 == 0);
    int condition2 = (N > 15 && N % 3 == 0);
    int condition3 = (N % 7 == 0);

    int Conditions = condition1 + condition2 + condition3;

    if (Conditions == 3) {
        printf("The verdict for the number %d is: SUPERNATURAL\n", N);
    } else if (Conditions == 2) {
        printf("The verdict for the number %d is: MIRACULOUS\n", N);
    } else if (Conditions == 1) {
        printf("The verdict for the number %d is: MAGICAL\n", N);
    } else {
        printf("The verdict for the number %d is: NORMAL\n", N);
    }

    return 0;
}
