#include <stdio.h>

int main ()
{
	int counter,e;
	long long a,total,sisa=0,y;
	
	scanf("%d",&counter);
	for(e=1;e<=counter;e++)
	{
		scanf("%lli",&a);
		y=a;
		total=0;
		printf("Case #%d: %lli",e,a);
		while(y!=0)
		{
			sisa= y%10;
			total = total +sisa;
			y = y/10;
		}
		if(total!=a)
		{
		    printf("%d",total);
        }
		{
		printf(" %lli",total);
		}
		A1:if(total>=10)
		{
			int z=total;
			total = 0;
			while(z!=0)
			{
				sisa = z%10;
				total = total+sisa;
				z = z/10;
			}
			printf(" %lli",total);
			goto A1;	
		}
		printf("\n");
		
		
	}

	return 0;
}


