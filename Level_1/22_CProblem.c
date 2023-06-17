 
 #include <stdio.h>

int main()
{
    int x,n;
    printf("Enter three digit number: ");
    scanf("%d", &n);

    x = n/10;
    x = x % 2;
    x = n - (x * 5);
    printf("%d",x);
    return 0;
}
