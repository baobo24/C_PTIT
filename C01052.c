#include<stdio.h>
#include<math.h>
int uocchan(int n){
	int dem = 0;
	for(int i=1; i<=sqrt(n); i++){
		if(n%i == 0){
			if(i%2 == 0) dem++;
			if(i*i != n && (n/i) % 2 == 0)
				dem++; 
		}
	}
	return dem;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		scanf("%d", &a);
		printf("%d\n", uocchan(a));
    }
	return 0;
}
