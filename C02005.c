#include<stdio.h>
int main(){
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for(i = 1; i<= a; i++){
		for(j=1; j < i; j++){
			printf("~");
		}
		for(j=1; j <= b; j++){
			printf("*");
		}
	printf("\n");
	}
return 0;
}
