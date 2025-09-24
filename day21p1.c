/*Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    lastDigit = num % 10;   // get last digit
    
    // find number of digits
    digits = (int)log10(num);
    
    // get first digit
    firstDigit = num / (int)pow(10, digits);
    
    // remove first digit
    int middlePart = num % (int)pow(10, digits);
    middlePart = middlePart / 10;  // remove last digit too
    
    // construct swapped number
    swappedNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;
    
    printf("Number after swapping first and last digit: %d\n", swappedNum);
    
    return 0;
}
