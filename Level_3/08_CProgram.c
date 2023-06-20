/*
        Question:  Get a number from user and check whether the digits are in
                    ascending order.
                    
        Example:     Input: 1234 Output: Yes. Input: 5687 Output: No
*/

#include <stdio.h>
int check_assending(int no);
int main()
{
    int number1, number2, result;
    printf("Enter number1: ");
    scanf("%d", &number1);
    result = check_assending(number1);
    if (result == 1)
        printf("Yes");
    else
        printf("No");

    return 0;
}
int check_assending(int no)
{
    int result,dummy;
    // Your Program Here
    int previousDigit = 10; // Initialize with a value greater than any digit (0-9)

    while (no > 0) {
        int currentDigit = no % 10;
        if (currentDigit > previousDigit) {
            return 0; // Digits are not in ascending order
        }
        previousDigit = currentDigit;
        no /= 10;
    }

    result = 1;

    return result;
}
