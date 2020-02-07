#include<stdio.h>

int main()
{
	int TestCase,counter1;
	long long int loop,parameter,sum,minus,counter2;
	
	scanf("%d",&TestCase);
	counter1=1;
	counter2=1;
	while(counter1<=TestCase)
	{
		scanf("%lld %lld %lld",&loop,&parameter,&minus);
		printf("Case #%d:\n",counter1);
		while(counter2<=loop)
		{
			sum=sum+counter2;;
			if(sum>parameter)
			{
				printf("%lld\n",sum);
				
				if((sum-parameter)%minus ==0)
				{
					sum=parameter;
				}
				else if((sum-parameter)%minus !=0)
				{
					while(sum>parameter)
					{
						sum=sum-minus;
					}
				}
			}
			counter2++;
		}
		counter2=1;
		sum=0;
		counter1++;
	}
	return 0;
}
