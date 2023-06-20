/*
        Question:    Write a loop program to print sum of 6 to 1. 
        
        Answer:          21
*/
#include <stdio.h>

int main()
{
int x=6,sum=0;
// Your Code here
loop:
    if (x > 0)
    {   sum+=x;
        // Your code here.

        x--;
        goto loop;
    }
        printf("%d\n",sum);

    return 0;
}