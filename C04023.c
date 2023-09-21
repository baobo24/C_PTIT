#include<stdio.h>
#include<math.h>
int selectionSort(int a[], int n){
	for(int i=0; i<n-1; i++){
		int minpos = i;
		for(int j=i+1; j<n; j++){
			if(a[minpos] > a[j])
				minpos = j;
		}
	int temp = a[minpos];
	a[minpos] = a[i];
	a[i] = temp;
	}
}
int main(){
	int n, j;
		scanf("%d", &n);
		int a[n];
		for(j=0; j<n; j++){
			scanf("%d", &a[j]);
		}
		selectionSort(a, n);
		for(j=0; j<n; j++){
			printf("%d ", a[j]);
		}
	return 0;
}
