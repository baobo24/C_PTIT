#include<stdio.h>
#include<math.h>
int snt(int a){
	if(a < 2) 
		return 0;
	for(int i=2; i <= sqrt(a); i++){
		if(a % i == 0)
			return 0;	
	}
	return 1;	
}
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
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, dem = 0;
		scanf("%d %d", &a, &b);
		for(int i=a; i<=b; i++){
			if(snt(i) && thuannghich(i)){
				printf("%d ", i);
				dem ++;
				if(dem%10 == 0 ) printf("\n");
			}
			
		}
		printf("\n\n");
	}
	return 0;
}
