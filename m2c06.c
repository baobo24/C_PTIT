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
	int b, c;
	scanf("%d %d", &b, &c);
	b--; c--;
	for(i=0; i<n; i++){
		int temp = a[b][i];
		a[b][i] = a[c][i];
		a[c][i] = temp;
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
