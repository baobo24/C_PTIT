#include<stdio.h>
#include<math.h>
int snt(int n){
	for(int i=2; i<=sqrt(n); i++){
		int dem = 0;
		while( n%i==0 ){
			dem ++;
			n /= i;
		}
		if(dem>0){
			printf("%d(%d) ", i, dem);
		}			
	}
	if(n!=1){
		printf("%d(1)", n);
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
		printf("Test %d: ", j);
		snt(a);
	}
	return 0;
}
