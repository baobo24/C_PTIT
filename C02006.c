#include<stdio.h>
int main(){
	int n, i;
	scanf("%d", &n);
	for(i=1;i <= n; i++){
		int a,sl = 0,sc = 0;
		scanf("%d", &a);
		int b = a % 10;
		while(a>0){
			if(a % 2 == 0) sc += 1;
			else sl +=1;
			a /= 10;
		}
	if(b % 2 == 1 && sl > sc)
		printf("YES\n");
	else printf("NO\n");	 	
	}
	return 0;
}