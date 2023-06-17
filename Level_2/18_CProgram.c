
#include <stdio.h>

int main()
{
    int num;
    int count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);
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