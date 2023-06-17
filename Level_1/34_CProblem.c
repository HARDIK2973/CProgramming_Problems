/*
        Question: Get two 3-digit numbers from user. Print the difference between the one’s digit and
                    hundred’s digit of the number whose ten’s digit is bigger than the other number’s ten’s 
                    digit
                    
        Example:  Input: 856 978 – Output: 1
                    Input: 128 365 - Output:  2
*/
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
