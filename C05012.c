#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int x=1; x<=t; x++){
		int n, i, j, k; 
		scanf("%d", &n);
		int a[n][n], b[n][n], c[n][n];
		for(i=0; i<n; i++){
			int dem = 1;
			for(j=0; j<i+1; j++){
				a[i][j] = j+1 ;
				b[j][i] = a[i][j];
			}
			for(j=i+1; j<n; j++){
				a[i][j] = 0;
				b[j][i] = a[i][j];
			}
		}
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				c[i][j] = 0;
				for(k=0; k<n; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		printf("Test %d:\n", x);
	 	for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
