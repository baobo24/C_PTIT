#include<stdio.h>

int main(){
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for(i=1; i<=a; i++){
		for(j=i; j<=b; j++){
			printf("%d", j);
		}
		if(i<=b){
			for(j=i-1; j>=1; j--){
				printf("%d", j);
			}
		}
		else{
			printf("%d", i);
			for(j = b-1; j>=1; j--){
				printf("%d", j);
			}
		}
		printf("\n");
	}
	return 0;
}
