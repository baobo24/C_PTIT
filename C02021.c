#include<stdio.h>
#include<math.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		int kc = n-1, temp = i;
		printf("%d ", i);
		for(j=1; j<i; j++){
			printf("%d ", temp+kc);
			temp += kc;
			kc--;
		}
		printf("\n");
	}
	return 0;
}
