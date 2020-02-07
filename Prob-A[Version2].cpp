#include<stdio.h>

int main()
{
    int counter;
    int x,y,z,sum;
    
    scanf("%d",&counter);
    getchar();
    
    for(int i=0;i<counter;i++)
    {
        scanf("%d %d",&x,&y);
        getchar();
        
        z = y + 1 - x;
        sum = z * (x + y) / 2;
        
        printf("Case #%d: %d\n",i+1,sum);
        sum = 0;
    }
}
