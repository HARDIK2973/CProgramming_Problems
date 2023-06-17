
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