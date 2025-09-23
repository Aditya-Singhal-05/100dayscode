/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula: F = (C × 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output result
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
