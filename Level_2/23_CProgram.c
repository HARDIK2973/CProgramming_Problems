/*
        Question:  Write a program get number from user print the total number of single-
                    digit perfect square numbers in the number.
                    
        Answer:          Input: 123456789  - Output: 3
                         Input: 987531   - Output: 2
*/
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