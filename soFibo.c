#include<stdio.h>
#include<math.h>
int soFibo(long long n){
	if (n == 0) return 1;
	long long a=0, b=1;
	while(b<n){
		long long c = a+b;
		a = b;
		b = c;
	}
	if(b == n) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(soFibo(n))
			printf("YES\n");
		else printf("NO\n");		
	}
	return 0;
}
