#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	int a[n][m], b[m][n];
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &a[i][j]);
			b[j][i] = a[i][j];
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
