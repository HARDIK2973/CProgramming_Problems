/*
        Question:    Get a number from user, find the number of digits and print the same.
         
        Example:     Input: 34678 Output: 5. Input: 12345678 Output: 8
*/

#include <stdio.h>
int count_digits(int no);
int main()
{
    int number, result;
    printf("Enter number: ");
    scanf("%d", &number);
    result = count_digits(number);
    printf("%d", result);
    return 0;
}
int count_digits(int no)
{
    int result = 0;
    // Your Program Here
    while (no > 0)
    {
        no /= 10;
        result++;
    }
    return result;
}