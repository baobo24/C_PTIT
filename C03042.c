#include<stdio.h>
#include<math.h>
int sogiam(int a){
	int b = a % 10;
	a /= 10;
	while(a > 0){
		int c = a % 10;
		if(c <= b){
			return 0;
			break;
		}
		b = c;
		a /= 10;
	}
	if(a == 0) 
		return 1;
}
int main(){
	int t; 
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int dem = 0;
		for(int i=a; i<=b; i++){
			if(sogiam(i))
				dem++; 
		}
		printf("%d\n", dem);		
	}
	return 0;
}
