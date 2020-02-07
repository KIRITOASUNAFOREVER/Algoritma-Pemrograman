#include <stdio.h>

//QuickSort
void quickSort (long long int a[], int lo, int hi){ 
//  lo adalah index bawah, hi adalah index atas 
//  dari bagian array yang akan di urutkan 
    int i=lo, j=hi, h; 
    int pivot=a[lo]; 
 
//  pembagian 
    do{ 
        while (a[i]<pivot) i++; 
        while (a[j]>pivot) j--; 
        if (i<=j) 
        { 
            h=a[i]; a[i]=a[j]; a[j]=h;//tukar 
            i++; j--; 
        } 
    } while (i<=j); 
 
//  pengurutan 
    if (lo<j) quickSort(a, lo, j); 
    if (i<hi) quickSort(a, i, hi); 
} 

int main(){
	int arr,b;
	scanf("%d %d",&arr,&b);

	long long int a[arr];
	int i,j;
	for(i=0;i<arr;i++){
		scanf("%lld",&a[i]);
		getchar();
	}

	quickSort(a,0,arr-1);
	
int detek;
for(i=0;i<b;i++){
	scanf("%d",&detek);
	
	detek=detek-1;
printf("Case #%d: %lld\n",i+1,a[detek]);
}
	return 0;
}
