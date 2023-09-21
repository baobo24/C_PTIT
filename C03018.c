#include<stdio.h>
#include<math.h>

int snt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			return 0;
	}
	return n>1;
}
int tongfibo(int n){
	int sum = 0;
	while(n>0){
		sum += n%10;
		n /= 10;
	}
	int f[51];
	f[0]=0; f[1]=1;
	for(int i=2; i<=50; i++){
		f[i] = f[i-1] + f[i-2];
	}
	for(int i=0;i<=50;i++){ 
		if(f[i]==sum)
			return 1;  
	}
	return 0;
}
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(b>a){
		for(int i=a; i<=b; i++){
			if(snt(i) && tongfibo(i))
				printf("%d ", i);
		}
	}
	if(a>b){
		for(int i=b; i<=a; i++){
			if(snt(i) && tongfibo(i))
				printf("%d ", i);
		}
	}
	return 0;
}
