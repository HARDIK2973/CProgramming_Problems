
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

if(last_no%2==0)
{
    printf("%d",x);
}else
{
    first_no = first_no - 1;
     remain = x % ((int)pow(10,sizee-1));
         final = (first_no*pow(10,(sizee-1))) + remain;
        printf("%d\n",final);

}

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
