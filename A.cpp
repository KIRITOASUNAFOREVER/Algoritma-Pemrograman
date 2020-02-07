#include<stdio.h>

int main()
{
	long long int testCase,a,b,c,d,counter=0;	
	
	scanf("%lld",&testCase);
	
	for(int i=0;i<testCase;i++)
	{
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		
		for(int j=0 ; j<100000 ; j++)
		{
			if((a*j+b)%d==c)
			{
				counter++;
				break;
			}
		}
		
		if(counter>0)
		{
			printf("Case #%lld: %s\n",i+1,"YES");
		}
		else
		{
			printf("Case #%lld: %s\n",i+1,"NO");
		}
		counter=0;
	}
	return 0;
}
