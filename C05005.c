#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int n , m, i, j;
	scanf("%d %d", &n, &m);
	int a[n][m];
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int b, c;
	scanf("%d %d", &b, &c);
	b--; c--;
    for(i=0; i<m; i++){
        int temp = a[b][i];
        a[b][i] = a[c][i];
        a[c][i] = temp;
    }
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
