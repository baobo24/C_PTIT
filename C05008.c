#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int k=1; k<=t; k++){
		int n, m, i, j;
		scanf("%d %d", &n, &m);
		int a[n][m];
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				scanf("%d", &a[i][j]);
			}
		}	
		int maxh, maxc, max1 = -1e9, max2 = -1e9;
		for(i=0; i<n; i++){
			int tong = 0;
			for(j=0; j<m; j++){
				tong += a[i][j];
			}
			if(tong > max1){
				max1 = tong;
				maxh = i;
			}
		}
		for(i=0; i<m; i++){
			int tong = 0;
			for(j=0; j<n; j++){
				if(j != maxh)
					tong += a[j][i];
			}
			if(tong > max2){
				max2 = tong;
				maxc = i;
			}
		}
		printf("Test %d:\n", k);
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				if(i != maxh && j != maxc)
					printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
