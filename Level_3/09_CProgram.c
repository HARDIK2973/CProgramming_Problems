/*
        Question:    Get a two-digit number from user swap the digits. 
        
        Example:     Input: 34 Output: 43. Input: 56 Output: 65
*/

#include <stdio.h>
int swap_digits(int no);
int main()
{
    int number, result;
    printf("Enter Two digit number: ");
    scanf("%d", &number);
    result = swap_digits(number);
    printf("%d", result);
    return 0;
}

int swap_digits(int no)
{
    int result;
    // Your Program Here
    int x, y;
    x = no % 10;
    y = no / 10;
    result = (x * 10) + y;
    return result;
}
