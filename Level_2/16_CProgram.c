/*
        Question:  Write a program get number from user print whether that number is 
                    prime or not.
                    
        Answer:          Input : 31   - Output : Prime
                         Input : 27   - Output  : Not Prime.
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
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}