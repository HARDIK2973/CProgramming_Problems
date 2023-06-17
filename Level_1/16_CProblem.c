
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