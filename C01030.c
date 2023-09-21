#include<stdio.h>
#include<math.h>
int snt(int n){
	for(int i=2; i<=sqrt(n); i++){
		while(n%i == 0){
			printf("%d ", i);
			n /= i;
		}
	}
	if(n != 1) printf("%d ", n);
	printf("\n");
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	for(int j=1; j<=t; j++){
		int a;
		scanf("%d", &a);
		snt(a);
	}
return 0;
}
