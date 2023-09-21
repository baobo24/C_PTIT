#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int j=1; j<=t; j++){
		int n, m, p, i;
		scanf("%d %d %d", &n, &m, &p);
		int a[n+m], b[m+n];
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(i=0; i<m; i++){
			scanf("%d", &b[i]);
		}
		for(i=n+m-1; i>=p; i--){
			a[i] = a[i-m];
		}
		for(i=p; i<m+p; i++){
			a[i] = b[i-p];
		}
		printf("Test %d:\n", j);
		for(i=0; i<m+n; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}
