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
int tongnt(int n){
	for(int i=1; i<=n/2; i++){
		if(snt(i) && snt(n-i)){
			printf("%d %d ", i, n-i);
		}
	}
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		int a;
		scanf("%d", &a);
		tongnt(a);
		printf("\n");
	}
	return 0;
}
