#include<stdio.h>
int thuannghich(long long n){
	int b = 0;
	int temp = n;
	while(n>0){
		b = b*10 + n%10;
		n /= 10; 
	}
	if(b == temp) return 1;	
	return 0;
}
int le(long long n){
	int sum = 0;
	while(n>0){
		int b = n%10;
		if(b%2 == 0)
			return 0;
		sum += b;
		n /= 10;
	}
	if(n == 0 && sum%2 == 1) return 1;
	return 0;
}
int main(){
	int m;
	scanf("%d", &m);
	for(int i=1; i<=m; i++){
		long long a;
		scanf("%lld", &a);
		if(thuannghich(a) && le(a))
			printf("YES\n");
		else printf("NO\n");	
	}
	return 0;
}