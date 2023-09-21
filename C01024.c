#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int b = n%10, c;
		while(n>0){
			c = n%10;
			n /= 10;
		}
		if(b == c) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
