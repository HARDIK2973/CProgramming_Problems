/*
        Question:  Write a program to get a number from user print the total number of 
                    digits in that number
                    
        Answer:          Input : 123456   - Output – 6
                         Input : 76895439- Output – 8 
                         Input : 675 – Output - 3
*/
#include <stdio.h>

int main()
{
     int x, n = 1;
    int count = 0;

    printf("Enter any number: ");
    scanf("%d", &x);
    if(x<0){
        x*=-1;
    }
    if(x==0)count=1;
    else{
    while (x > 0)
    {
        x= x / 10;
        count++;
    }
    }
    printf("Totle numbers: %d", count);
    return 0;
}
