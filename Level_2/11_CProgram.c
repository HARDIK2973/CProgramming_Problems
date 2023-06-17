
#include <stdio.h>

int main()
{
     int x, n = 1;
    int count = 0;

    printf("Enter any number: ");
    scanf("%d", &x);
    if(x<0){
        x*=-1;
    }
    if(x==0)count=1;
    else{
    while (x > 0)
    {
        x= x / 10;
        count++;
    }
    }
    printf("Totle numbers: %d", count);
    return 0;
}
