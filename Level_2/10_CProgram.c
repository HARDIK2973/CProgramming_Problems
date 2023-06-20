/*
        Question:  Write a loop program to print the sum of two-digit odd numbers, whose
                    ten’s digit is 7.
                    
        Answer:          375
*/
 #include <stdio.h>

int main()
{
    int x = 11, y=0, sum = 0;
// Your Code here
loop:
    if (x < 100)
    {
        sum = x / 10;
        if ((sum == 7) && (x%2!=0))
        {
            y = y + x;
        }
        x++;
        goto loop;
    }
    printf("%d\n", y);

    return 0;
}