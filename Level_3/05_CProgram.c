/*
        Question:    Get a number from user and count the number of zeros in that number 
                     and print. Write your code inside the function. Do not Change the 
                     format.
                     
        Example:     Input: 100 Output: 2 . Input: 1060030 Output: 4.
*/

#include <stdio.h>
int find_no_of_zeros(int no);
int main()
{
    int number, result;
    printf("Enter the number: ");
    scanf("%d", &number);
    result = find_no_of_zeros(number);
    printf("%d", result);
    return 0;
}
int find_no_of_zeros(int no)
{
    int result = 0;
    // Your Program Here
    while (no > 0)
    {
        int count = 0;
        count = no % 10;
        if (count == 0)
            result++;
        no /= 10;
    }
    return result;
}