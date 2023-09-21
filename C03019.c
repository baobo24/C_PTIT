#include<stdio.h>
#include<math.h>
int thuannghich(int n){
	int b = 0;
	int temp = n;
	while(n>0){
		b = b*10 + n%10;
		n /= 10; 
	}
	if(b == temp) return 1;	
	return 0;
}
int tong(int n){
	int tong = 0;
	while(n>0){
		tong += n%10;
		n /= 10;
	}
	if(tong % 10 == 0) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a = pow(10,n-1), b = pow(10,n), dem = 0;
		for(int i=a; i<b; i++){
			if(thuannghich(i) && tong(i))
				dem++;
		}
		printf("%d\n", dem);
	}
	return 0;
}
