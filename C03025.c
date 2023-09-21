#include<stdio.h>
#include<math.h>
int snt(int n){
	for(int i=2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;	
	}
	return n>1 ;	
}
int csnt(int n){
	while(n>0){
		int b = n%10;
		if(snt(b) != 1)
			return 0;
		n /= 10;	
	}
	return 1; 
}

int tongnt(int n){
	int sum = 0;
	while(n>0){
		sum += n%10;
		n /= 10;
	}
	return snt(sum);
}
int main(){
	int t;
	scanf("%d", &t);
	for(int j=1; j<=t; j++){
		int a, b;
		scanf("%d %d", &a, &b);
		int dem = 0;
		for(int i=a; i <= b; i++){
			if(csnt(i) && snt(i) && tongnt(i))
				dem++;
		}            
		printf("%d\n", dem);	
	}
	return 0;
}
   