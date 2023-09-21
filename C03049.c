#include<stdio.h>
int main(){
	int n, i;
	scanf("%d", &n);
	for(i=1;i <= n; i++){
		long long a,sl = 0,sc = 0;
		scanf("%lld", &a);
		long long b = a;
		while(a>0){
			if(a % 2 == 0) sc ++;
			else sl ++;
			a /= 10;
		}
		if(b % 2 == 0 && sc > sl)
			printf("YES\n");
		else printf("NO\n");	 	
	}
	return 0;
}