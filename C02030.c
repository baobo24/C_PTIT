#include<stdio.h>
#include<math.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		char kt = '@';
		char tmp = kt;
		for(j=1; j<=i; j++){
			printf("%c", kt);
			kt+=2;
		}
		for(j=1; j<=i-1; j++){
			printf("%c", kt-4);
			kt -= 2;
		}
		printf("\n");
	}
	return 0;
}
