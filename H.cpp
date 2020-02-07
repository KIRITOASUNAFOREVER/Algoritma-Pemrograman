#include<stdio.h>

int main(){
	int ulang,ulang1;
	scanf("%d",&ulang1);
	for(ulang=1;ulang<=ulang1;ulang++){
		int arr,i;
		scanf("%d",&arr);
		int a[arr+3];
		for(i=0;i<arr;i++){
			scanf("%d",&a[i]);
		}
		int rank[arr],j;
		for(i=0;i<arr;i++){
					rank[i]=1;
			for(int j=0;j<arr;j++){
				if(a[i]<a[j]){
					rank[i]++;
				}
			}
		}
		printf("Case #%d:",ulang);
		for(i=0;i<arr;i++){
			printf(" %d",rank[i]);
		}
		printf("\n");
	}
	return 0;
}
