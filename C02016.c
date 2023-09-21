#include<stdio.h>

int main(){
	int n; 
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(i%2 != 0){
			for(int j=1; j<i*2; j+=2)
				printf("%d", j);
		}
		if(i%2 == 0){
			for(int j=2; j<=i*2; j+=2)
				printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
