#include<stdio.h>
#include<math.h>
int main(){
	int n, m, i;
	scanf("%d", &n);
	int a[200];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for(i=m; i<n; i++){
		printf("%d ", a[i]);
	}
	for(i=0; i<m; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
