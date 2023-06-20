/*
        Question:  Write a program get number from user print the total number of single-
                    digit prime numbers in the number.
                    
        Answer:          Input: 163496481  - Output: 1
                         Input: 364925   - Output: 3
*/
#include <stdio.h>

int main()
{
    int num, count = 0;
    int dummy, x = 0;
    printf("Enter the munber: ");
    scanf("%d", &num);
    while (num > 0)
    {
        dummy = num % 10;
        if (dummy == 2)
            x++;
        else
        {
            for (int i = 2; i < dummy; i++)
            {

                if (dummy % i == 0)
                    count++;
            }
        }
        if (count == 0)
            x++;
        num /= 10;
    }
    printf("%d", x);
}