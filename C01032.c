#include<stdio.h>
#include<math.h>

int tich(int n){
	int dem = 1;
	for(int i=2; i<=sqrt(n); i++){
		if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            dem *= i;
        }
	}
	if(n>1) dem *= n;
	return dem;
}
int main(){
	int t;
	scanf("%d", &t);
	for(int j=1; j<=t; j++){
		int a;
		scanf("%d", &a);
		printf("%d\n", tich(a));
	}
	return 0;
}
