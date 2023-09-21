#include<stdio.h>
#include<math.h>
int main(){
	int n, i, j; 
	scanf("%d", &n);
	int a[n][n];
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Pattern 1:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
	printf("Pattern 2:\n");
	for(i=n-1; i>=0; i--){
		for(j=n-1; j>=0; j--){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("Pattern 3:\n");
	for(i=n-1; i>=0; i--){
		for(j=0; j<n; j++){
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
	printf("Pattern 4:\n");
	for(i=0; i<n; i++){
		for(j=n-1; j>=0; j--){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
