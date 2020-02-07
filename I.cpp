#include<stdio.h>

int main(){
	int arr,b,counter = 1;
	scanf("%d %d",&arr,&b);
	long long int a[arr+3],search,aa;
	int i,tampung,j,k=-1,last=0,jml[100005]={0};
	for(i=0;i<arr;i++){
		scanf("%lld",&aa);
			if(aa != last)
			{
				k++;
				last = aa;
				a[k]=aa;
				jml[k]++;
			}
			else
			{
				jml[k]++;	
			}
	}
	for(i=0;i<b;i++){
		tampung=0;
		int flag=0;
	scanf("%lld",&search);
	int awal=0,akhir=arr-1,tengah=(awal+akhir)/2;
	while(awal<=akhir){
		if(a[tengah]<search)awal=tengah+1;
		else if(a[tengah]==search){
			flag=1;
			break;
		}else akhir=tengah-1;
		tengah=(awal+akhir)/2;
	}
	if(flag==1){
	printf("Case #%d: %d\n",counter,jml[tengah]);
	counter = counter + 1;
    }
	else{
		printf("Case #%d: 0\n",counter);
		counter = counter + 1;
	}
}

	return 0;
}
