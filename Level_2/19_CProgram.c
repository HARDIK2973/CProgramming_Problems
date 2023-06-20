/*
        Question:  Write a program to get a 4-digit number from user, print whether that 
                    number’s middle two digits (hundred’s digit and ten’s digit) is prime.
                    
        Answer:          Input: 6359   - Output: Not Prime
                         Input: 3517   - Output: Prime
*/
#include <stdio.h>

int main()
{
    int num;
    int count = 0;

    printf("Enter the Four Digit number: ");
    scanf("%d", &num);
    num = num / 10;
    num = num % 100;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count == 0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}