#include<stdio.h>
#include<math.h>
long long ucln(long long m, long long n){
	while(n>0){
		int c = m%n;
		m = n;
		n = c; 
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
		int n, m;
		scanf("%d %d", &n, &m);
		long long bsnn = 1;
		for(long long i=n; i<=m; i++){
			bsnn = bcnn(bsnn,i);
		}
		printf("%lld\n", bsnn);
	}
	return 0;
}
