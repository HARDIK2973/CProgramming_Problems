
 #include <stdio.h>

int main()
{
    int num, x, count = 0;
    printf("Enter the munber: ");
    scanf("%d", &num);
    while (num > 0)
    {
        x = num % 10;

        if((1==x)|| (4==x) || (9==x))count++;

        num /= 10;
    }
    printf("No. of square number in your number is: %d", count);

    return 0;
}