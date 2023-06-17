
 #include <stdio.h>

int main()
{
    int x,y,n;
    printf("Enter Two digit number: ");
    scanf("%d", &n);

    x = n%10;
    y = n/10;
    y = y + x;
    x = y %2;
    n = n - (x * 5);
    printf("%d",n);
    return 0;
}