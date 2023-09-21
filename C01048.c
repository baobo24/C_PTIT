#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int sl = 0, sc = 0;
	while(n>0){
		int b = n % 10;
		if(b % 2 == 0)
			sc ++;
		else sl ++;	
		n /= 10;
	}
	printf("%d %d", sl, sc);
	return 0;
}
