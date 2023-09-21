#include<stdio.h>
#include<math.h>
long long uocnt(long long n){
	long long max = 0 ;
	for(int i=2; i<=sqrt(n); i++){
		while(n%i == 0){
			max = i;
			n /= i;
		}
	}
	if(n != 1) max = n;
	return max;
}
int main(){
	int t;
	scanf("%d", &t);
	for(int j=1; j<=t; j++){
		long long a;
		scanf("%lld", &a);
		printf("%lld\n", uocnt(a));
	}
	return 0;
}
