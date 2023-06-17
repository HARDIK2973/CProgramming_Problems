/*
        Question:  Get a three-digit number from user and make the ten’s digit as 0,
                    then print it.
                    
        Example:     Input: 695 Output 605.    Input: 182 Output: 102
*/

 #include <stdio.h>

int main()
{
    int n, x,  z;
    printf("Enter three digit number: ");
    scanf("%d", &n);
    z = 0;
    x = n /10;
    x = x/10;
    n = n%10;

    printf("%d%d%d", x, z,n);
    return 0;
}