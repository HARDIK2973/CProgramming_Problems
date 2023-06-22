/*
        Question:  Get a three-digit number from user and subtract 5 from that number if
                    one’s digit number and 100’s digit number are same, then print the 
                    result. Do not use “if”.
                    
        Example:     Input: 595 Output 590.    Input: 372 Output: 372
*/
 #include <stdio.h>

int main()
{
    int x,y,n;
    printf("Enter three digit number: ");
    scanf("%d", &n);

    x = n % 10;
    y = n /100;
    x = (x==y);
    n = n - (x * 5);
    printf("%d",n);
    return 0;
}