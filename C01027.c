#include<stdio.h>
#include<math.h>
int ucln(int m, int n){
	for(int i=1; i = fmin(m,n); i++){
		int c = m%n;
		m = n;
		n = c;
		if(n==0) break; 
	}
	if(n==0) return m;
}
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n",ucln(a,b));
	}
	return 0;
}
