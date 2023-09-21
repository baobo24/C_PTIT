#include<stdio.h>
#include<math.h>
int snt(int a){
	if(a < 2) 
		return 0;
	for(int i=2; i <= sqrt(a); i++){
		if(a % i == 0)
			return 0;	
	}
	return 1;	
}

int main(){
	int n;
	scanf("%d", &n);
	int a[10] = {0};
	while(n>0){
		int b = n%10;
		if(snt(b)) a[b]++;
		n /= 10;
	}
	while(n>0){
		int b = n%10;
		if(a[b] > 0){
			printf("%d %d\n", b, a[b]);
			a[b] = 0;
		}
		n /= 10;
	}
	return 0;
}
