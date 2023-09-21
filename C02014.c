#include<stdio.h>
#include<math.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	int a[20][20];
	int h1=0, h2 = 2*n - 2, c1=0, c2 = 2*n - 2;
	int tmp = 2*n - 1;
	while(n>=1){
		for(i=c1; i<=c2; i++){
			a[h1][i] = n;
		}
		h1++;
		for(i=h1; i<=h2; i++){
			a[i][c2] = n;
		}
		c2--;
		for(i=c2; i>=c1; i--){
			a[h2][i] = n;
		}
		h2--;
		for(i=h2; i>=h1; i--){
			a[i][c1] = n;
		}
		c1++;
		n--;
	}
	for(i=0; i<tmp; i++){
		for(j=0; j<tmp; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
