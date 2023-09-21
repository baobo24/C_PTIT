#include<stdio.h>
#include<math.h>
int soFibo(int n){
	int a=0, b=1;
	while(b<n){
		int c = a+b;
		a = b;
		b = c;
	}
	if(b == n) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	if(soFibo(n))
		printf("1");
	else printf("0");	
