
 #include <stdio.h>

int main()
{
    int x,y,n;
    printf("Enter three digit number: ");
    scanf("%d", &n);

    x = n % 10;
    y = n /100;
    x = (x==y);
    n = n - (x * 5);
    printf("%d",n);
    return 0;
}