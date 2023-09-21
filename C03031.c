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
	int t;
	scanf("%d",&t);
	while(t--){
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if(ucln(a,b) == ucln(c,d))
			printf("YES\n");
		else printf("NO\n");	
	}
	return 0;
}
