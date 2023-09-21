#include<stdio.h>
#include<math.h>
int gt(int n){
	int tich = 1;
	for(int i=1; i<=n; i++){
		tich *= i;
	}
	return tich;
}
int tohop(int k, int n){
	int a = gt(n) / (gt(k) * gt(n-k));
	return a;
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			printf("%d ", tohop(j,i));
		}
		printf("\n");
	}
	return 0;
}
