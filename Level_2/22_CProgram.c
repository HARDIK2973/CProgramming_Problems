//(was little hard)
/*
        Question:  Write a program get number from user print the total number of two-digit
                    odd numbers in the number.
        Answer:          Input: 12345678   - Output: 3
                        Input: 987531   - Output: 4
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num, current_no, prvs_no = 1, x=1, count = 0;
    int i = 1, dummy;
    printf("Enter the munber: ");
    scanf("%d", &num);
    current_no = num % 10;
    while (x > 0)
    {
        x = num / pow(10, i);
        i++;
        if (x < 10 )
            prvs_no = x;
            if(prvs_no == 0) break;
        else
            prvs_no = x % 10;

        dummy = (prvs_no * 10) + current_no;
        if ((dummy % 2) != 0)
            count++;
        current_no = prvs_no;
    }
    printf("No. of Two digit odd number in your number is: %d", count);

    return 0;
}