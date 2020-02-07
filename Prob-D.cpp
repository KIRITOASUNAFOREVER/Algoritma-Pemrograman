#include <stdio.h>

int main()
{
    int i, j, num, isPrime,k=0,counter;

    scanf("%d",&counter);
    getchar();
    
    for(int m=0;m<counter;m++)
    {
            
    scanf("%d", &num);
    printf("Case #%d:",k+1);
    k++;
    for(i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime==1)
            {
                printf(" %d", i);
            }
        }
        
    }
    printf("\n");
    }
    return 0;
}
