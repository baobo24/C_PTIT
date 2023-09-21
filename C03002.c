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
	int n, i;
	scanf("%d", &n);
	for(i=2; i<n; i++){
		if(snt(i))
			printf("%d\n", i);
	}
	return 0;
}