#include<stdio.h>

int main(){
	int n, k, dem = 0;
	scanf("%d %d", &n, &k);
	for(int i=2; i<=n; i *= 2){
		dem += n/i;
	}
	if(dem>=k)
		printf("Yes");
	else printf("No");	
	return 0;
}
