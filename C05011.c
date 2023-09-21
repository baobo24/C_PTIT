#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int x=1; x<=t; x++){
		int n, m, i, j, k; 
		scanf("%d %d", &n, &m);
		int a[n][m], b[m][n], c[n][n];
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				scanf("%d", &a[i][j]);
				b[j][i] = a[i][j];
			}
		}
		printf("Test %d:\n", x);
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				c[i][j] = 0;
				for(k=0; k<m; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
