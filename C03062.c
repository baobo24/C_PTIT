#include<stdio.h>
#include<math.h>
int ucln(int a, int b){
	while(b>0){
		int temp = a%b;
		a = b;
		b = temp;
	}
	return a;
}
int bcnn(int a, int b){
	return (a*b)/ ucln(a, b);
}
int main(){
	int t; 
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int bs = b;
		for(int i=b; i>=a; i--){
			if(bs%i != 0)
				bs = bcnn(bs, i);
		}
		printf("%d", bs);
	}
}
	