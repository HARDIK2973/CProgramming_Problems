/*
    Question:  Get a three-digit number from user and make the one’s digit as 2,
                then print it.
                
    Example:     Input: 695 Output 692.    Input: 182 Output: 182
*/
#include <stdio.h>

int main()
{
    int n, x,  z;
    printf("Enter three digit number: ");
    scanf("%d", &n);
    z = 2;
    x = n /10;

    printf("%d%d", x, z);
    return 0;
}