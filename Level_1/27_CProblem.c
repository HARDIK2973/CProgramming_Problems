
 #include <stdio.h>

int main()
{
    int x, y, n;
    printf("Enter three digit number: ");
    scanf("%d", &n);

    x = n % 10;
    n = n / 10;
    y = n %10;
    n = n/10;
    if (x + n +y ==10)
        printf("Success");
    else
        printf("Failure");
    return 0;
}