/*
        Question:  Get a two-digit number from user and make the one’s digit as 0,
                    then print it.
                    
        Example:     Input: 95 Output 90.   Input: 18 Output: 10
*/

#include <stdio.h>

int main()
{
    int n, x, y;
    printf("Enter Two digit number: ");
    scanf("%d", &n);
    x = n / 10;
    y = 0;

    printf("%d%d", x, y);
    return 0;
}