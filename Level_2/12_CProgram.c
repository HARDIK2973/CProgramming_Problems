
#include <stdio.h>

int main()
{
     int x, n ;
    int sum = 0;

    printf("Enter any number: ");
    scanf("%d", &x);
    if(x<0){
        x*=-1;
    }
    if(x==0)sum=0;
    else{
    while (x > 0)
    {   n = x%10;
        sum+=n;
        x= x / 10;

    }
    }
    printf("Totle sum of digit: %d", sum);
    return 0;
}