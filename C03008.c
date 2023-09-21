#include<stdio.h>
#include<math.h>
int shh(int n){
	int sum = 1;
	for(int i=2; i< sqrt(n); i++){
		if(n % i == 0){
			sum += i;
			if(i != n/i ) sum += n/i;	
		}
	}
	if(sum == n) return 1;
	return 0;
}
int main(){
	int a;
	scanf("%d", &a);
	for(int j=2; j<a; j++){
		if(shh(j))
		printf("%d ", j);
	}
	return 0;
}
