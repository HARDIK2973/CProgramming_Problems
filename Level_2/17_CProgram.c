/*
        Question:  Write a program to get a number from user, print whether that number is 
                    prime, and sum of digit is equal to 14.
                    
        Answer:          Input: 59  - Output: Prime & Sum of Digits is 14
                         Input: 77 - Output: Not Prime but sum of digits is 14 
                         Input: 13 - Output: Prime, but sum of Digits is not 14
*/
#include <stdio.h>

int main()
{
    int num;
    int count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count == 0)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    count = num % 10;
    num = num / 10;
    ((count + num)==14)?printf("sum of Digit is 14"):printf("Sum of Digit is not 14");

    return 0;
}