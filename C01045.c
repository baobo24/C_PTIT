#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int sd = n, sc = n % 10;
	while(n>=10){
		sd = n/10;
		n /= 10;
	}
	printf("%d %d", sd, sc); 
	return 0;
}
