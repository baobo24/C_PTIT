#include<stdio.h>
#include<math.h>
void selectionSort(int a[],int n){
	for(int i=0; i<n-1; i++){
		int minpos = i;
		for(int j=i; j<n; j++){
			if(a[j]<a[minpos])
				minpos = j;
		}
		int tmp = a[i];
		a[i] = a[minpos];
		a[minpos] = tmp;
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m, p, i, j;
		scanf("%d %d %d", &n, &m, &p);
		p--;
		int a[n][m], b[m][n];
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				scanf("%d", &a[i][j]);
				b[j][i] = a[i][j];
			}
		}
		for(i=0; i<n; i++){
			selectionSort(b[p], n);
		}
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				printf("%d ", b[j][i]);
			}
		printf("\n");
		}
	}
	return 0;
}
