#include<stdio.h>
int chan(long long n){
	while(n>0){
		if(n%2==1)
			return 0;
		else n /= 10; 
	}
	if(n==0) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		long long a;
		scanf("%lld", &a);
		if(chan(a)) 
			printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
