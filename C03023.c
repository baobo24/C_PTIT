#include<stdio.h>
int thuannghich(long long n){
	int b = 0;
	int temp = n;
	while(n>0){
		if(n%10 == 9) return 0;
		b = b*10 + n%10;
		n /= 10; 
	}
	if(b == temp) return 1;	
	return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	int dem = 0;
	for(int i=2; i<n; i++){
		if(thuannghich(i)){
			printf("%d ", i);
			dem++;
		}
	}
	printf("\n");
	printf("%d", dem);
	return 0;
}
