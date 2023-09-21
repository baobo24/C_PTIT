#include<stdio.h>
#include<math.h>
long long ucln(long long m, long long n){
	while(n>0){
		int c = m%n;
		m = n;
		n = c;
		if(n==0) break; 
	}
	if(n==0) return m;
}
long long bcnn(long long m, long long n){
	long long c = (m*n)/ucln(m,n);
	return c;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld %lld\n", bcnn(a,b), ucln(a,b));
	}
	return 0;
}
