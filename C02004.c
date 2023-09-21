#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	int m = n-1;
	for(i=1; i<=n; i++){
		for(j=1; j<=m+n;j++){
			if(j<=m) printf("~");
			else{
				if(i==1 || j==m+n || j==m+1 || i==n) printf("*");
				else printf(".");
				}
			}
		printf("\n");
		m--;
	}
return 0;
}
