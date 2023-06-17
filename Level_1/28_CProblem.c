
 #include <stdio.h>

int main()
{
    int x, y, n;
    printf("Enter three digit number: ");
    scanf("%d", &n);

    x = n % 10;
    n = n / 100;
    if (x + n < 10)
        printf("Success");
    else
        printf("Failure");
    return 0;
}