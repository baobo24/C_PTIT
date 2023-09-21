#include<stdio.h>
#include<math.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	int kt = 1;
	for(i=1; i<=n; i++){
		if(i%2){
			for(j=1; j<=i; j++){
				printf("%d ", kt);
				kt++;
			}
		}
		else{
			int temp = kt;
			for(j=1; j<=i; j++){
				printf("%d ", temp+i-1);
				temp--; 
				kt++;
			}
		}
		printf("\n");
	}
	return 0;
}
