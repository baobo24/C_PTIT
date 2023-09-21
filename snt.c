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

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n;
		scanf("%d", &n);
		if(snt(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}