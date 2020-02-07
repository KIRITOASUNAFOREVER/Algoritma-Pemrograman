#include<stdio.h>

int totalbuy[10001];
int temp[10001];

void merge(int left , int right){
	
	if(left == right) return;
	
	int mid = (left+right) / 2;
	merge(left,mid);
	merge(mid+1,right);
	
	int leftIndex = left;
	int rightIndex = mid+1;
	int tempIndex = left;
	
	while (leftIndex <= mid && rightIndex <= right) {
		if (totalbuy[leftIndex] < totalbuy[rightIndex] ) {
			temp[tempIndex] = totalbuy[leftIndex];
			leftIndex++;
		}
		else{
			temp[tempIndex] = totalbuy[rightIndex];
			rightIndex++;
		}
		tempIndex++;
	}
	
	while (leftIndex <= mid) {
		temp[tempIndex] = totalbuy[leftIndex];
		leftIndex++;
		tempIndex++;
	}
	
	while (rightIndex <= right) {
		temp[tempIndex] = totalbuy[rightIndex];
		rightIndex++;
		tempIndex++;
	}
	
	for(int i = left ; i <= right ; i++){
		totalbuy[i] = temp[i];
	}
}

//void swap (int *a, int *b){
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void quick (int L, int R, int arr[]){
//	if (L < R){
//		
//		int j = L;
//		int k = R + 1;
//		
//		do{
//			
//			do{
//				j++;
//			}while (arr[j] < arr[L]);
//			
//			do{
//				k--;
//			}while (arr[k] > arr[L]);
//			
//			if (j < k) swap(&arr[j], &arr[k]);
//		}while (j < k);
//		
//		swap(&arr[L], &arr[k]);
//		quick(L, k-1, arr);
//		quick(k+1, R, arr);
//	}
//	
//}

int search (int arr[], int L, int R, int loc){
	int mid;
	if (L<=R){
		mid=L+((R-L)/2);
		
		if (arr[mid]<=loc && (arr[mid+1]>loc || arr[mid+1]==0)){
			return mid+1;
		}else if ((arr[mid]<loc&&arr[mid+1]<=loc)||(arr[mid]==loc && arr[mid+1]==loc)){
			search (arr,mid+1,R,loc);
		}else if (arr[mid]>loc) search (arr,L,mid-1,loc);
	}else return 0;
	
}

int main(){
	
	FILE *f = fopen("testdata.in", "r");
	
	int T, lim;
	int money;
	
	fscanf(f, "%d %d\n", &T, &lim);
	for (int t = 0; t < T; t++){
		fscanf (f, "%d\n", &totalbuy[t]);
	}
	
	//quick(0,T-1,price);	
	merge(0, T-1);
	
//	for (int i=0;i<T;i++){
//		printf("%d ", price[i]);
//	}
//	puts("");
	
	for (int i = 0; i < lim; i++){
		fscanf (f, "%d\n", &money);
		printf("Query #%d: %d\n", i+1, search(totalbuy,0,T,money));
	}
	
	return 0;
}
