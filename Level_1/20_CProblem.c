

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