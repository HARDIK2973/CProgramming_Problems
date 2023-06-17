
#include <stdio.h>

int main()
{
int x=1,sum=0;
// Your Code here
loop:
    if (x < 6)
    {   sum+=x;
        // Your code here.

        x++;
        goto loop;
    }
        printf("%d\n",sum);

    return 0;
}