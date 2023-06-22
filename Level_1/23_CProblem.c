/*
        Question:  Get a two digit number from user and subtract 5 from that number if the
                    sum of the digits of the number is odd, then print the result. Do not use 
                    “if”.
                    
        Example:     Input: 95 Output 95.   Input: 72 Output: 67
*/
 #include <stdio.h>

int main()
{
    int x,y,n;
    printf("Enter Two digit number: ");
    scanf("%d", &n);

    x = n%10;
    y = n/10;
    y = y + x;
    x = y %2;
    n = n - (x * 5);
    printf("%d",n);
    return 0;
}