#include<stdio.h>
#include<math.h>
int main(){
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for(i=1; i<=a; i++){
		for(j=i; j<=b; j++){
			printf("%d", j);
		}
		if(i<=b){	
			for(j=b-1; j>=b-i+1; j--){
				printf("%d", j);
			}
		}
		else{
			for(j=i; j>=i-b+1; j--){
				printf("%d", j);
			}
		}
		printf("\n");
	}
	return 0;
}
