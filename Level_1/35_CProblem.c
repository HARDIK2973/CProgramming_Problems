/*
        Question:    Get two 3-digit numbers from user. Add the one’s and hundred’s digits of both the 
                    numbers. Print the sum of all the digits of the number whose sum of one’s and 
                    hundred’s digits is bigger.
                    
        Example:     Input: 856 978 – Output: 24
                        Input: 128 365 - Output:  11
*/
#include <stdio.h>

int main()
{
    int x, y,one_x,one_y,hundred_x,hundred_y,numx,numy;
    printf("Enter Four digit number: ");
    scanf("%d %d", &y,&x);
    one_x = x%10;
    one_y = y%10;
    hundred_x = (x/100);
    hundred_y = (y/100);
    if(one_x + hundred_x > one_y + hundred_y)
    {   int ten_x=(x/10)%10;
        numx = ten_x+one_x+hundred_x;
        printf("%d",numx);
    }else{
        int ten_y=(y/10)%10;
        numy = ten_y+one_y+hundred_y;
        printf("%d",numy);
    }


    
    return 0;
}