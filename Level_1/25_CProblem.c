
 #include <stdio.h>

int main()
{
    int x,y,z,n;
    printf("Enter Four digit number: ");
    scanf("%d", &n);

    x = n/10;
    x = x%10;
    y = n/100;
    y = y%10;
    x = (y == x);
    n = n - (x * 5);
    printf("%d",n);
    return 0;
}