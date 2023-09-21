#include<stdio.h>
#include<math.h>
int sokhonggiam(int a){
	int b = a % 10, c;
	a /= 10;
	while(a > 0){
		c = a % 10;
		if(c > b){
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
		int scs;
		scanf("%d", &scs);
		int a = pow(10,scs-1), b = pow(10,scs);
		for(int i=a; i<b; i++){
			if(sokhonggiam(i))
				printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
