/*    Question:  Get a four-digit number from user and only reverse the 
 *    first two digits of the number, then print the number.
 *
 *    Example:     Input: 9561 Output 9516.   Input: 3859 Output: 3895
*/ 


#include <stdio.h>

int main()
{
    int n, x, y, z;
    printf("Enter Four digit number: ");
    scanf("%d", &n);
    x = n % 10;
    y = n / 10;
    z = y / 10;
    y = y % 10;

    printf("%d%d%d", z, x, y);
    return 0;
}