/*
        Question:    Get a number from user and Check Prime or Not and print the result.
                     Write your code inside the function. Do not Change the format.
                     
        Example:     Input: 61 Output Number is Prime. Input: 1200 Output: Number is not Prime
*/

#include <stdio.h>
int isPrime(int no);
int main()
{
    int number, result;
    printf("Enter number: ");
    scanf("%d", &number);
    result = isPrime(number);
    if (result == 1)
        printf("Number is Prime");
    else
        printf("Number is not Prime");
    return 0;
}
int isPrime(int no)
{
    int result=0;
    // Your Program Here
    for (int x = 2; x < no; x++)
    {
        if( (no % x)==0)result++;

    }
    if (result == 0)
        result = 1;
    else
        result = 0;
    return result;
}