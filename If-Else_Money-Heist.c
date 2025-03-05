#include <stdio.h>

void correct_passcode(int passcode[], int corrections[][2], int size) {
    for (int i = 0; i < size; i++) {
        int index = corrections[i][0];
        int rotation = corrections[i][1];
        passcode[index] = (passcode[index] + rotation) % 10;
    }
}

int main() {
    int passcode[10];
    int corrections[3][2];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &passcode[i]);
    }

    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &corrections[i][0], &corrections[i][1]);
    }

    correct_passcode(passcode, corrections, 3);

    for (int i = 0; i < 10; i++) {
        printf("%d ", passcode[i]);
    }

    return 0;
}
