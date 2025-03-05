#include <stdio.h>

void evaluateRisk(int age, int income, int riskTolerance) {
    if (riskTolerance < 1 || riskTolerance > 3) {
        return; 
    }

    if (age > 50) {
        printf((income > 75000 && riskTolerance == 3) ? 
               "High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n" : 
               "Low Risk Portfolio: Suitable for conservative investments.\n");
    } 
    else if (age >= 30) {
        printf((income > 75000 && riskTolerance == 3) ? 
               "High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n" : 
               "Medium Risk Portfolio: Balanced risk for moderate returns.\n");
    } 
    else { 
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");
    }
}

int main() {
    int age, income, riskTolerance;
    scanf("%d %d %d", &age, &income, &riskTolerance);
    evaluateRisk(age, income, riskTolerance);

    return 0;
}
