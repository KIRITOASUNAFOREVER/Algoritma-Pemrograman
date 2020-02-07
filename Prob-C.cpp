#include<stdio.h>

int main()
{
    long long int counter,a,b,hasil;
    
    scanf("%lld",&counter);
    
    for(int i=0;i<counter;i++)
    {
        scanf("%lld %lld",&a,&b);
        
        for(int j=0;j<b;j++)
        {
            a = a/2;
        }
        hasil = a;
            printf("%lld\n",hasil);
    }
}
