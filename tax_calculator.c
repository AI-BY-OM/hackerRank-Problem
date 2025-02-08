#include <stdio.h>

void calculate_tax(double income) {
    if (income < 0 || income > 10000000) {
        printf("INVALID\n");
        return;
    }
    
    double tax;
    if (income > 1000000) {
        tax += (income - 1000000) * 0.30;
        income = 1000000;
    }
    if (income > 500000) {
        tax += (income - 500000) * 0.20;
        income = 500000;
    }
    if (income > 250000) {
        tax += (income - 250000) * 0.05;
    }
    
    printf("%.2f\n", tax);
}

int main() {
    double income;
    if (scanf("%lf", &income) != 1) {
        printf("INVALID\n");
        return 0;
    }
    calculate_tax(income);
    return 0;
}
