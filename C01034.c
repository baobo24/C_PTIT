#include<stdio.h>
#include<math.h>

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	int a = sqrt(m), b = sqrt(n);
	if(a*a<m) printf("%d\n", b-a);
	else printf("%d\n", b-a+1);
	for(int i=a; i<=b; i++){
		if(i*i>=m) printf("%d\n", i*i);
	}
	return 0;
}
