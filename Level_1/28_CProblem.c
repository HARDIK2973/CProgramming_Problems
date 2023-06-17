/*
        Question:  Get a three-digit number from user. If the sum of the one’s digit and 
                    hundred’s digit is less than 10, then print “Success”, otherwise print 
                    “Failure”.
                    
        Example:     Input: 569 - Output Failure.    Input: 316 - Output:  Success.
*/
 #include <stdio.h>

int main()
{
    int x, y, n;
    printf("Enter three digit number: ");
    scanf("%d", &n);

    x = n % 10;
    n = n / 100;
    if (x + n < 10)
        printf("Success");
    else
        printf("Failure");
    return 0;
}