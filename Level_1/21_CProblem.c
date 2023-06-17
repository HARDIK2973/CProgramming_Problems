/*
        Question:  Get a number from user and subtract 5 from that number if the number 
                    is odd, then print the result. Do not use “if”.
                    
        Example:     Input: 695 Output 690.    Input: 182 Output: 182
*/
 #include <stdio.h>

int main()
{
    int n;
    printf("Enter three digit number: ");
    scanf("%d", &n);

    while(n%2!=0){
            n = n - 5;
    printf("%d",n);
        break;
    }
    return 0;
}