
#include <stdio.h>

int main()
{
    int x = 11, y=0, sum = 0;
// Your Code here
loop:
    if (x < 100)
    {
        sum = x % 10;
        if (sum == 5)
        {
            y = y + x;
        }
        x++;
        goto loop;
    }
    printf("%d\n", y);

    return 0;
}