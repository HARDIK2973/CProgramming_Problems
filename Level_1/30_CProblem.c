/*
        Question:    Get a four-digit number from user. If the sum of the ten’s digit and 
                     hundred’s digit is equal to 10, and one of the digits is more than 7 then 
                     print “Success”, otherwise print “Failure”.
                     
        Example:     Input: 4649 – Output: Failure.   Input: 9286 - Output:  Success.
*/
#include <stdio.h>

int main()
{
    int x, y, n;
    printf("Enter Four digit number: ");
    scanf("%d", &n);

    x = n % 100;
    n = n / 100;
    x = x / 10;
    n = n % 10;
    if (((x + n) == 10) && (x>7 || n >7))
        printf("Success");
    else
        printf("Failure");
    return 0;
}
