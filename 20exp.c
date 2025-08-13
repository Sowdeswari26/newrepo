#include <stdio.h>

int main() {
    float num1, num2, sum;

    // Ask the user for input
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Add the numbers
    sum = num1 + num2;

    // Print the result
    printf("The sum is: %.2f\n", sum);

    return 0;
}
