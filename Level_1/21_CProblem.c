
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