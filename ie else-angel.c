#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if (x % 360 == 0) {
        printf("Full Rotation\n");
        return 0;
    }

    x = (x % 360 + 360) % 360;

    if (x < 90) {
        printf("Acute Angle\n");
    } else if (x == 90) {
        printf("Right Angle\n");
    } else if (x < 180) {
        printf("Obtuse Angle\n");
    } else if (x == 180) {
        printf("Straight Angle\n");
    } else {
        printf("Reflex Angle\n");
    }

    return 0;
}
