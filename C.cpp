#include<stdio.h>

int main(){
	int ulang,ulang1;
	scanf("%d",&ulang1);
	for(ulang=1;ulang<=ulang1;ulang++){
		int arr,i,j;
		scanf("%d",&arr);
		long long int a[arr+5],gcd[100000],tamgcd=0,tama,tamb,tamtot,flag=0;
		for(i=0;i<arr;i++){
			scanf("%lld",&a[i]);
		}
		for(i=0;i<arr;i++){
			for(j=i;j<arr-1;j++){
				if (a[i] > a[j+1]){
        			tama = a[i];
        			tamb = a[j+1];
    			}else{
        			tama = a[j+1];
        			tamb = a[i];
    			}
    			tamtot = tama % tamb;
    			while (tamtot != 0){
        			tama   = tamb;
        			tamb = tamtot;
        			tamtot   = tama % tamb;
    			}
    			gcd[tamgcd] = tamb;
    			tamgcd++;
			}
		}
		flag=0;
		for(i=0;i<tamgcd;i++){
			if(flag<gcd[i]){
				flag=gcd[i];
			}
		}
		printf("Case #%d: %d\n",ulang,flag);
	}
	return 0;
}
