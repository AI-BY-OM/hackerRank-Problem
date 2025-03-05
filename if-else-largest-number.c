#include <stdio.h>

int main() {
    int num1, num2, num3;  
    printf("Please enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);  //taking input
    
    if (num1 > num2 && num1 > num3) {
      printf("The largest number is %d\n", num1);  //print num1
    } else if (num2 > num1 && num2 > num3) {
      printf("The largest number is %d\n", num2);  //print num2
    } else if (num3 > num1 && num3 > num2) {
      printf("The largest number is %d\n", num3);  //print num3
    } else {
      printf("Invalid input:  numbers are equal or no any  largest number.\n");   // if invalid
    }
    
    return 0;
}