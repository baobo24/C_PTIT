#include<stdio.h>
#include<math.h>
int thuannghich(long long n){
	long long b = 0;
	long long temp = n;
	while(n>0){
		b = b*10 + n%10;
		n /= 10; 
	}
	if(b == temp) return 1;	
	return 0;
}

int main(){
	int t; 
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long temp = n/10;
		int a = n%10, b, dem=0;
		while(n>0){
			b = n%10;
			n/= 10;
			dem++;
		}
		if(a != b*2 && b != a*2)
			printf("NO\n");
		else{
			n = temp - b*pow(10,dem-2);
			if(thuannghich(n))
				printf("YES\n");
			else printf("NO\n");
		}	
	}
	return 0;
}
