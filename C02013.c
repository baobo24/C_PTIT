#include<stdio.h>
#include<math.h>
int main(){
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	int c = fmax(a, b);
	for(i=1; i<=a; i++){
		if(a<=b){
			for(j=c-i+1; j>=1; j--){
				printf("%d", j);
			}
		} 
		else{
			for(j=a-i+1; j>=b-i; j--){
				if(j>=1) printf("%d", j);
			}
			
		}
		for(j=2; j<=i-1; j++){
				printf("%d", j);
			}
		printf("\n");
	}
	return 0;
}
