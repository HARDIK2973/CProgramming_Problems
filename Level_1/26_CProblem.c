
#include <stdio.h>

int main()
{
    int x, y, n;
    printf("Enter two digit number: ");
    scanf("%d", &n);

    x = n % 10;
    n = n / 10;
    if (x + n ==10)
        printf("Success");
    else
        printf("Failure");
    return 0;
}