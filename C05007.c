#include<stdio.h>
#include<math.h>
int main(){
	int m, n, i, j; 
	scanf("%d %d", &m, &n);
	int a[m][n];
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int b, c;
	scanf("%d %d", &b, &c);
	b--; c--;
	for(i=0; i<m; i++){
		int temp = a[i][b];
		a[i][b] = a[i][c];
		a[i][c] = temp;
	}
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
