#include<stdio.h>
#include<math.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		int a;
		scanf("%d", &a);
		int b = 0;
		for(j = 2; j <= sqrt(a); j++){
			if(a % j == 0){
				b += 1;
			}
		}
	if(b != 0 || a <2 ) printf("NO\n");
	else printf("YES\n");	
	}
	return 0;
}
