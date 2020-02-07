#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a;
	scanf("%i",&a);
	 
	if (a>=0 && a<=30)
	{
		a=pow(2,a)-2;
printf("%i\n",a);
	}
		return 0;
}
