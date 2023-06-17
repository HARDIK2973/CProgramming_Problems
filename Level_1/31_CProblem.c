

#include <stdio.h>

int main()
{
    int one_n,ten_n,hun_n,n1,n2, n;
    printf("Enter Three digit number: ");
    scanf("%d", &n);
    one_n = (n%10);
    ten_n = (n/10)%10;
    hun_n = (n/100);
    n = one_n+ten_n+hun_n;
    n1 = (n%10)+(n/10);
    n2 = (n1%10)+(n1/10);
    if(n<10){
        printf("%d",n);
        
    }else if( n1 <10)
    {
        printf("%d",n1);
    }else if( n2 <10)
    {
        printf("%d",n2);
    }
    return 0;
}
