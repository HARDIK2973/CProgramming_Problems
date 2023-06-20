/*
        Question:  Write a loop program to print the two-digit even numbers, who’s sum of
                    digits are 6.
                    
        Answer:          24
                         42
                         60
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
        if((x%2==0)&&(sum==6)){
        printf("%d\n",x);
        }
        x++;
        goto loop;
    }

    return 0;
}