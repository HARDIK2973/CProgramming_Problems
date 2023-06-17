/*
        Question:  Get a three-digit number from user. If the sum of the digits is less than 10, then print
                    the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10, 
                    then print the sum, otherwise add the digits of the sum, and print the sum.
                    
        Note: The result should be always single digit only.

        Example:     Input: 123 –  Output: 6
                     Input: 149 -  Output: 5   (149:1+4+9 = 14: 1+4 = 5)
                     Input: 991 -  Output: 1 (991: 9+9+1 = 19: 1+9 = 10: 1+0 = 1)
*/

#include <stdio.h>

int main()
{
    int one_n,ten_n,hun_n,n1,n2, n;
    printf("Enter Three digit number: ");
    scanf("%d", &n);
    one_n = (n%10);
    ten_n = (n/10)%10;
    hun_n = (n/100);
    n = one_n+ten_n+hun_n;
    n1 = (n%10)+(n/10);
    n2 = (n1%10)+(n1/10);
    if(n<10){
        printf("%d",n);
        
    }else if( n1 <10)
    {
        printf("%d",n1);
    }else if( n2 <10)
    {
        printf("%d",n2);
    }
    return 0;
}
