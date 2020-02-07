#include <stdio.h>
int main(){
	char a[10],c[10],e[10];
	int b,d,f;
	scanf("%[A-z]%d%[A-z]%d%[A-z]%d",&a,&b,&c,&d,&e,&f);
	printf("%-11s%d\n",a,b);
	printf("%-11s%d\n",c,d);
	printf("%-11s%d\n",e,f);
	return 0;}
