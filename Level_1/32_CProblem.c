/*
        Question:  Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then 
                    print the sum, otherwise print the difference.
                    
        Example:     Input: 56 78 –  Output: 22
                     Input: 14 65 - Output:  79
*/
#include <stdio.h>

int main()
{
    int x, y, n;
    printf("Enter Four digit number: ");
    scanf("%d %d", &n,&x);

    if(x+n<100)printf("%d",x+n);
    else printf("%d",x-n);
    return 0;
}