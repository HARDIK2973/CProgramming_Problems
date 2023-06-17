/*
        Question:  Get a number from user and reverse that number and print. Write your 
                    code inside the function. Do not Change the format.
                    
        Example:     Input: 123 Output: 321. Input: 56789 Output: 98765.
*/

#include <stdio.h>
#include <math.h>
int sizee(int no);
int reverse_number(int no);
int main()
{
    int number, result;
    printf("Enter the number: ");
    scanf("%d", &number);
    result = reverse_number(number);
    printf("%d", result);
    return 0;
}
int reverse_number(int no)
{
    int result, size;
    int x, y, i = 1;
    // Your Program Here
    size = sizee(no);

    while (no > 0)
    {
        x = no % 10;
        y = x * pow(10, (size - i));
        no /= 10;
        result += y;
        i++;
    }

    return result;
}

int sizee(int no)
{
    int size = 0;
    while (no > 0)
    {
        size++;
        no /= 10;
    }

    return size;
}