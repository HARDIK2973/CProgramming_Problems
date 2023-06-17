
#include <stdio.h>

int main()
{
    int x, y, n;
    printf("Enter Four digit number: ");
    scanf("%d", &n);

    x = n % 100;
    n = n / 100;
    x = x / 10;
    n = n % 10;
    if (((x + n) == 10) && (x>7 || n >7))
        printf("Success");
    else
        printf("Failure");
    return 0;
}
