Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables for the coefficients and roots
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    // Prompt the user to enter the coefficients
    printf("Enter the coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check if a is zero, which is not a quadratic equation
    if (a == 0) {
        printf("The coefficient 'a' cannot be zero. This is not a quadratic equation.\n");
    } else {
        // Condition for real and distinct roots
        if (discriminant > 0) {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The roots are real and distinct.\n");
            printf("Root 1 = %.2lf\n", root1);
            printf("Root 2 = %.2lf\n", root2);
        }
        // Condition for real and equal roots
        else if (discriminant == 0) {
            root1 = root2 = -b / (2 * a);
            printf("The roots are real and equal.\n");
            printf("Root 1 and Root 2 = %.2lf\n", root1);
        }
        // Condition for complex roots
        else {
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("The roots are complex and distinct.\n");
            printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
            printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
        }
    }

    return 0;
}
