#include<stdio.h>
#include<string.h>

int main()
{
    long long int a,counter,kacau,angka[1000],p=0,jurus=0;
    char kata[100],temp;
 
    scanf("%lld",&counter);
    getchar();
    
    for(int i=0;i<counter;i++)
    {
        scanf("%[^\n]",kata);
        getchar();
    
        scanf("%lld",&kacau);
        getchar();

        for(int k=0;k<kacau;k++)
        {
            scanf("%lld",&angka[k]);
            getchar();
           
            a=1;
    while(kata[a]-1!='\0')
    {
        
        if(a == angka[k])
        {
            temp = kata[a-1];
            if(jurus==0)
            {
             
             printf("Case #%d: ",p+1);
             p++;
             jurus=1;
   }
            printf("%c",temp);
        }
        a++;
    }   
  
        }
        jurus=0;
        
         printf("\n"); 
        
}
}
