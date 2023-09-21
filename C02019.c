#include<stdio.h>
#include<math.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("%d", j*2);
		}
		for(j=(i-1)*2; j>=2; j-=2){
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
