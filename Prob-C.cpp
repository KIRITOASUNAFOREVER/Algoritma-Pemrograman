#include <stdio.h>

int main(){
	long long int arr,ulang;
	scanf("%lld",&arr);
	long long int angka[arr+100];
	long long int ulang1=0;
	for(ulang1=1;ulang1<=arr;ulang1++){
		scanf("%lld",&angka[ulang1]);
	}
	scanf("%lld",&ulang);
	for(ulang1=0;ulang1<ulang;ulang1++){
		long long int i=0,j=0,tampung=0;
		scanf("%lld %lld",&i,&j);
		for(i=i;i<=j;i++){
			tampung=tampung+angka[i];
		}
		printf("Answer #%lld: %lld\n",ulang1+1,tampung);
	}
	
	return 0;
}
