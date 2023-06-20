/*
        Question:  Write a loop program to print the two-digit odd numbers, who’s sum of
                    digits are 7.
                    
        Answer:          25
                         43
                         61
*/
#include <stdio.h>

int main()
{
int x=11,y,sum=0;
// Your Code here
loop:
    if ((x < 100) )
    {   sum=x%10;
        y=x/10;
        sum=y+sum;
        if((x%2!=0)&&(sum==7)){
        printf("%d\n",x);
        }
        x++;
        goto loop;
    }

    return 0;
}