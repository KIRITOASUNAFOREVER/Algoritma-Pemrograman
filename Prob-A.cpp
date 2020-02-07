#include<stdio.h>

int main()
{
    int counter;
    long long int num1,num2,hasil1,hasil2,total;
    
    scanf("%d",&counter);
    getchar();
    
    for(long long int i=0;i<counter;i++)
    {
        scanf("%lld %lld",&num1,&num2);
        getchar();
        
        hasil1 = (num1*(num1-1))/2;
        hasil2 = ((num2+1)*num2)/2;
        
        total = hasil2 - hasil1;
            printf("Case #%lld: %lld\n",i+1,total);   
    }
}
