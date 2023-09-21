#include<stdio.h>
#include<math.h>
int thuannghichbo4(int n){
	int b = 0;
	int temp = n;
	while(n>0){
		if(n%10 == 4) 
			return 0;
		b = b*10 + n%10;
		n /= 10; 
	}
	if(b == temp) return 1;	
	return 0;
}
int tong(int n){
	int sum = 0;
	while(n>0){
		sum += n%10;
		n /= 10;
	}
	if(sum%10 == 0) return 1;
	return 0;
}
int main(){
	int t; 
	scanf("%d", &t);
	while(t--){
		int scs;
		scanf("%d", &scs);
		int a = pow(10,scs-1), b = pow(10,scs);
		for(int i=a; i<b; i++){
			if(thuannghichbo4(i) && tong(i))
				printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
