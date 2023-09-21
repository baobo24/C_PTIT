#include<stdio.h>
#include<math.h>
int main(){
	int n, i;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int min = 1e9, min2 = 1e9;
	for(i=0; i<n; i++){
		min = fmin(min,a[i]);
	}
	for(i=0; i<n; i++){
		if(a[i] > min){
			min2 = fmin(min2,a[i]);
		}
	}
	printf("%d %d", min, min2);
	return 0;
}
