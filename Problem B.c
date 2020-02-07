#include <stdio.h>

int main()
{
    int T,N,j,k;
    char a;
    int chocolate, strawberry, vanilla;

    scanf("%d", &T); getchar();

    for (j=1; j <= T; j++)
    {
        scanf("%d",&N); getchar();

        chocolate = 0; 
        strawberry = 0; 
        vanilla = 0; 

        for( k = 1; k <= N; k++)
        {
            scanf("%c", &a); getchar();
        
            if(a == 'c')
            {
                chocolate++;
            }
            else if(a == 's')
            {
                strawberry++;
            }
            else if(a == 'v') 
            {
                vanilla++;
            }
        }

        printf("Case #%d:", j);

        int max = 0;
        if (max < chocolate) 
        {
            max = chocolate;
        }
        if (max < strawberry)
        {
            max = strawberry;
        }
        if (max < vanilla)
        {
            max = vanilla;
        }

        if (max == chocolate)
        {
            printf("\nchocolate");
        }
        if (max == strawberry)
        {
            printf("\nstrawberry");
        }
        if (max == vanilla)
        {
            printf("\nvanilla");
        }

        printf("\n");
    }

    return 0;
}
