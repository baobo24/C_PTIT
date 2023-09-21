#include<stdio.h>
#include<math.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	char kt = 'a';
	for(i=1; i<=n; i++){
		if(i%2){
			for(j=1; j<=i; j++){
				printf("%c ", kt);
				kt++;
			}
		}
		else{
			char temp = kt;
			for(j=1; j<=i; j++){
				printf("%c ", temp+i-1);
				temp--; 
				kt++;
			}
		}
		printf("\n");
	}
	return 0;
}
