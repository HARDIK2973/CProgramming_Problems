
#include <stdio.h>

int main()
{
    int x, y, n;
    printf("Enter Four digit number: ");
    scanf("%d %d", &n,&x);

    if(x+n<100)printf("%d",x+n);
    else printf("%d",x-n);
    return 0;
}