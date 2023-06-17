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