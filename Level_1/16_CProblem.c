/*
        Question:  Get a four-digit number from user and only reverse the
                    last two digits of the number, then print the number.

        Example:     Input: 9561 Output 5961.   Input: 3859 Output: 8359
*/
#include <stdio.h>

int main()
{
    int n, x, y, z;
    printf("Enter Four digit number: ");
    scanf("%d", &n);
    y = n / 100;
    x = y % 10;
    y = y / 10;
    z = n % 100;

    printf("%d%d%d", x, y, z);
    return 0;
}