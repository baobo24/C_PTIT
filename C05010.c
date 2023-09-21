#include<stdio.h>
#include<math.h>

int nt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			return 0;
	}
	return n>1;
}
int main(){
	int n, i, j;
	scanf("%d", &n);
	int a[50][50];
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int sum = 0;
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			if(nt(a[i][j]))
				sum += a[i][j];
		}
	}
	printf("%d", sum);
	return 0;
}
