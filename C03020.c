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
int sochua6(long long n){
	while(n>0){
		int a = n%10;
		if(a == 6) return 1;
		n /= 10;
	}
	return 0;
}
int tong8(long long n){
	long long tong = 0;
	while(n>0){
		tong += n%10;
		n /= 10;
	}
	if(tong%10 == 8) return 1;
	return 0;
}
int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if(a > b){
        long long tmp = a;
        a = b;
        b = tmp;
    }
	for(long long i=a; i<=b; i++){
		if(tong8(i) && sochua6(i) && thuannghich(i))
			printf("%lld ", i);
	}
	return 0;
}
