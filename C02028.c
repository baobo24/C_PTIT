#include<stdio.h>
#include<math.h>

int main(){
	int n,i ,j;
	scanf("%d", &n);
	char kt ='@';
	for(i=0; i<n; i++){
		char tmp = kt + n-1-i;
		for(j=0; j<n-i; j++){
			printf("%c", tmp);
			tmp += 1;
		}
		printf("\n");
	}
	return 0;
}
