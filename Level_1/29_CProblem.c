/*
        Question:    Get a four-digit number from user. If the sum of the ten’s digit and 
                    hundred’s digit is greater than 10, then print “Success”, otherwise print 
                    “Failure”.
                    
        Example:     Input: 7529 – Output: Failure.   Input: 9386 - Output:  Success.
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
    if (x + n > 10)
        printf("Success");
    else
        printf("Failure");
    return 0;
}