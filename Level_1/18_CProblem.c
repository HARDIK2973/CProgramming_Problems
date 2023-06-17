
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