/*
        Question:  Write a program to get a number from user and interchange the first and 
                    last digits and print the result.
                    
        Answer:          Input : 123456   - Output – 623451
                         Input : 76895439- Output – 96895437 
                         Input : 675 – Output - 576
*/

#include <stdio.h>
#include<math.h>
int first(int n);
void size(x);
    int sizee=0;

int main()
{
    int x, last_no, first_no, remain;

    int final;

    printf("Enter any number: ");
    scanf("%d", &x);
    last_no = x % 10;
    first_no = first(x);
    size(x);

    remain = x % ((int)pow(10,sizee-1));
    remain = remain / 10;
        printf("%d\n",first_no);
    printf("%d\n",last_no);
    printf("%d\n",sizee);

    printf("%d\n",remain);
    final = (last_no*pow(10,(sizee-1))) + (remain*10) + first_no;
        printf("%d\n",final);

    return 0;
}

int first(int n)
{
    int no;
    while (n > 0)
    {
        n = n / 10;
        if (n < 10)
            break;
    }
    no = n;

    return no;
}

void size(int x)
{
    while(x>0){
        x/=10;
        sizee++;
    }
}