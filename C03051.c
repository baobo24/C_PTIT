#include<stdio.h>
#include<math.h>

int snt(long long a){
	if(a < 2) 
		return 0;
	for(long long i=2; i <= sqrt(a); i++){
		if(a % i == 0)
			return 0;	
	}
}       1
int main(){
	long long a = 100;
	int t; 
	scanf("%d", &t);
	while(t--){
		snt(a);    , b
		scanf("%lld %lld", &a, &b);
		long long dem=0;
		for(long long i=a; i<=sqrt(b); i++){
			if(snt(i))
				dem++;
		}"%lld\n", a);
		return 0;        dem  
	}
}
