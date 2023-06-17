
#include <stdio.h>

int main()
{
     int x, n = 1;
    int count = 0;

    printf("Enter any number: ");
    scanf("%d", &x);

        printf("Revese numbers: ");

    if(x==0)count=0;
    else{
    while (x > 0)
    {
        count = x%10;
        printf("%d",count);
        x= x / 10;

    }
    }
    return 0;
}