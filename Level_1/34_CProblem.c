
#include<stdio.h>
int main ()
{
    int x,y;
    printf("Enter Number1 :");
    scanf("%d",&x);
    printf("Enter Number2 :");
    scanf("%d",&y);
    int ones,tens_x,tens_y,hundreds,difference;
    tens_x = (x/10) %10;
    tens_y = (y/10) % 10;
    if(tens_x > tens_y)
    {
                ones = x %10;
                hundreds = x/100;
    }
    else
        {
                ones = y %10;
                hundreds = y/100;
    }
    if(ones > hundreds)
                difference = ones - hundreds;
    else
                difference = hundreds - ones;
    printf("%d",difference);
}
