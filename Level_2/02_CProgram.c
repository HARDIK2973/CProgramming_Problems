/*
        Question:    Write a loop program to print 5 to 1 on one by one. 
        Answer:          5
                         4 
                         3 
                         2 
                         1
*/

#include <stdio.h>

int main()
{
int x=5;
// Your Code here
loop:
    if (x > 0)
    {
        // Your code here.
        printf("%d\n",x);
        x--;
        goto loop;
    }

    return 0;
}