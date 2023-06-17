
#include <stdio.h>

int main()
{
    int x, y, n;
    printf("Enter Four digit number: ");
    scanf("%d %d", &n,&x);


    if(x > n)
    {
        y = x/10;
        x = x%10;
        printf("%d",x + y);
    }else{
        y = n/10;
        x = n%10;
        printf("%d",x + y);
    }

    
    return 0;
}
