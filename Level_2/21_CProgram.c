
 #include <stdio.h>

int main()
{
    int num, x, count = 0;
    printf("Enter the munber: ");
    scanf("%d", &num);
    while (num > 0)
    {
        x = num % 10;
        if (x % 2 != 0)
            count++;
        num /= 10;
    }
    printf("No. of odd number in your number is: %d", count);

    return 0;
}