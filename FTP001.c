#include<stdio.h>
#include<math.h>
int main(){
	int n, i, j; 
	scanf("%d", &n);
	int a[n][n];
	for(i=0; i<n; i++){
		for(j=0; j<i+1; j++){
			a[i][j] = 0;
		}
		for(j=i+1; j<n; j++){
			a[i][j] = j-i;
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
