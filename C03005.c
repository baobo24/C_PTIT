#include<stdio.h>
#include<math.h>
int ucln(long long m, long long n){
	while(n>0){
		int c = m%n;
		m = n;
		n = c;
		if(n==0) break; 
	}
	if(n==0) return m;
}
int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	for(int i=a; i<=b; i++){
		for(int j=i+1; j<=b; j++){
			if(ucln(i,j) == 1) 
				printf("(%d,%d)\n", i, j);
		}
	}
	return 0;
}
