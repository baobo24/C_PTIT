#include<stdio.h>

int main(){
	int a, b, i, sum = 0;
	scanf("%d", &a);
	int temp = a;
	while(a > 0){
		b = a % 10;
		int c = 1;
		for(i = 1; i <= b; i++){
			c *= i;
		}
		sum += c;
		a /= 10;
	}
	if(sum == temp) printf("1");
	else printf("0");
	return 0;
}