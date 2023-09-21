#include<stdio.h>
#include<math.h>

void bubbleSort(int a[], int n){
	for(int i=0; i < n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j] > a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	bubbleSort(a, n);
	for(int i=0; i<n; i++){
		if(a[i]%2 == 0)
			printf("%d ", a[i]);
	}
	for(int i=0; i<n; i++){
		if(a[i] % 2 != 0)
			printf("%d ", a[i]);
	}
	return 0;
}

