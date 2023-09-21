#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int a, sum = 0;
		scanf("%d", &a);
		while(a > 0){
			sum += a % 10;
			a /= 10;
		}
		if(sum % 10 == 0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
