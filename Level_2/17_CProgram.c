
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