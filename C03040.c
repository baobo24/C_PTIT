#include<stdio.h>
#include<math.h>

int tongcs(int n){
	int sum = 0;
	while(n>0){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int tongsnt(int n){
	int dem = 0;
	for(int i=2; i<=sqrt(n); i++){
		while(n%i == 0){
			dem += tongcs(i);
			n /= i;
		}
	}
	if(n != 1)
		dem += tongcs(n);
	return dem;
}

int main(){
	int a;
	scanf("%d", &a);
	if(tongsnt(a) == tongcs(a))
		printf("YES");
	else printf("NO");	
	return 0;
}
