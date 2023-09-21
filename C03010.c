#include<stdio.h>

int strong(int n){
	int sum = 0, m = n;
	while(n>0){
		int b = n % 10, gt=1 ;		
		for(int i = 1; i <= b; i++){
			gt *= i;
		}
		sum += gt;
		n /= 10;
	}
	if(sum == m) return 1;
	return 0;	
}

int main() {
	int a;
	scanf("%d", &a);
	for(int j=1; j <= a; j++){
		if(strong(j))
			printf("%d ", j);
	}
	return 0;
}
