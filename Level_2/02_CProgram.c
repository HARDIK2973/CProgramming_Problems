

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