/*
        Question:  Get a two-digit number from user. If the sum of the digits is 10 then print 
                    “Success”, otherwise print “Failure”.
                    
        Example:     Input: 56 - Output Failure.   Input: 37 - Output:  Success.
*/
#include <stdio.h>

int main()
{
    int x, y, n;
    printf("Enter two digit number: ");
    scanf("%d", &n);

    x = n % 10;
    n = n / 10;
    if (x + n ==10)
        printf("Success");
    else
        printf("Failure");
    return 0;
}