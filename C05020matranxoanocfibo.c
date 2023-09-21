#include<stdio.h>
#include<math.h>

int b[92];
void check(){
	b[0] = 0; b[1] = 1;
	for(int i=2; i<92; i++){
		b[i] = b[i-1] + b[i-2];
	}
}
int main(){
	check();
	int n, i, j;
	scanf("%d", &n);
	int a[100][100];
	int h1=0, h2=n-1, c1=0, c2=n-1;
	int dem = 0;
	while(h1 <= h2 && c1 <= c2){
		for(i=c1; i<=c2; i++){
			a[h1][i] = b[dem++];
		}
		h1++;
		for(i=h1; i<=h2; i++){
			a[i][c2] = b[dem++];
		}
		c2--;
		for(i=c2; i>=c1; i--){
			a[h2][i] = b[dem++];
		}
		h2--;
		for(i=h2; i>=h1; i--){
			a[i][c1] = b[dem++];
		}
		c1++;
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
