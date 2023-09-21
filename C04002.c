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
	for(int i=1; i<=t; i++){
		int n, j;
		scanf("%d", &n);
		int a[n];
		for(j=0; j<n; j++){
			scanf("%d", &a[j]);
		}
		for(j=0; j<n; j++){
			if(snt(a[j]))
				printf("%d ", a[j]);
		}
		printf("\n");
	}
	return 0;
}
