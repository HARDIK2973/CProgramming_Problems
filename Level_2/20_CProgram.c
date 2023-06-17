

#include <stdio.h>

int main()
{
    int num;
    int count = 0,dummy=0;

    for(int i=2;i<10;i++)
    {   count = 0;
        
        for(int div=2;div<i;div++)
        {   
            // if(i==2) break;
            if(i%div==0)count++;
        }
        // if(i==2) dummy++;
        if(count==0)dummy++;
    }

   printf("No. of Prime numbers: %d",dummy);

    return 0;
}