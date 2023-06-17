/*
        Question:    Get a four-digit number from user and subtract 5 from that number if
                    ten’s digit position and 100’s digit position is same, then print the result. 
                    Do not use “if”.
                    
        Example:     Input: 7595 Output 7595.   Input: 3772 Output: 3767
*/
 #include <stdio.h>

int main()
{
    int x,y,z,n;
    printf("Enter Four digit number: ");
    scanf("%d", &n);

    x = n/10;
    x = x%10;
    y = n/100;
    y = y%10;
    x = (y == x);
    n = n - (x * 5);
    printf("%d",n);
    return 0;
}