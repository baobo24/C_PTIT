#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		int n, j;
		scanf("%d", &n);
		int a[n];
		for(j=0; j<n; j++){
			scanf("%d", &a[j]);
		}
		for(j=0; j<n; j++){
			if(a[j] % 2 == 0)
				printf("%d ", a[j]);
		}
		printf("\n");
	}
	return 0;
}
