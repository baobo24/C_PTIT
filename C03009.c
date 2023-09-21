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
	int a, b;
	scanf("%d %d", &a, &b);
	if(a<b){
		for(int j=a; j<=b; j++){
			if(a==1) j++;
			if(shh(j))
			printf("%d ", j);
		}
	}
	else {
		for(int j=b; j<=a; j++){
			if(b==1) j++;
			if(shh(j))
			printf("%d ", j);
		}
	}
	return 0;
}