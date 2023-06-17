/*
        Question:    Get two 2-digit numbers from user. Print the sum of digits of the biggest number. 
        
        Example:     Input: 56 78 –  Output: 15
                        Input: 14 65 - Output:  11
*/
#include <stdio.h>

int main()
{
    int x, y, n;
    printf("Enter Four digit number: ");
    scanf("%d %d", &n,&x);


    if(x > n)
    {
        y = x/10;
        x = x%10;
        printf("%d",x + y);
    }else{
        y = n/10;
        x = n%10;
        printf("%d",x + y);
    }

    
    return 0;
}
