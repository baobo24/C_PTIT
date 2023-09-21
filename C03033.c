#include<stdio.h>
#include<math.h>
int snt(int n){
	int nhan = 0;
	for(int i=2; i<=sqrt(n); i++){
		int dem = 0;
		while( n%i==0 ){
			dem ++;
			n /= i;
		}
		if(dem>0){
			if(nhan>=1) printf(" * ");
			printf("%d^%d", i, dem);
			nhan++;
		}			
	}
	if(n!=1){
		if(nhan>=1) printf(" * ");
		printf("%d^1", n);
	}
	printf("\n");
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	for(int j=1; j<=t; j++){
		int a;
		scanf("%d", &a);
		printf("%d = ",a);
		snt(a);
	}
	return 0;
}
