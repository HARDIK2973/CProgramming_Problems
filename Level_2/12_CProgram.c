/*
        Question:  Write a program to get a number from user and print the sum of all 
                    digits.
                    
        Answer:          Input: 123456   - Output – 21
                         Input: 76895439 - Output – 51 
                         Input: 675 – Output - 18
*/
#include <stdio.h>

int main()
{
     int x, n ;
    int sum = 0;

    printf("Enter any number: ");
    scanf("%d", &x);
    if(x<0){
        x*=-1;
    }
    if(x==0)sum=0;
    else{
    while (x > 0)
    {   n = x%10;
        sum+=n;
        x= x / 10;

    }
    }
    printf("Totle sum of digit: %d", sum);
    return 0;
}