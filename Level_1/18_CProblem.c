/*
        Question:  Get a two-digit number from user and make the ten’s digit 1,
                    then print it.
                    
        Example:     Input: 95 Output 15.   Input: 82 Output: 12
*/
#include <stdio.h>

int main()
{
    int n, x,  z;
    printf("Enter two digit number: ");
    scanf("%d", &n);
    z = 1;
    x = n %10;

    printf("%d%d", z, x);
    return 0;
}