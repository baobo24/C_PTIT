#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int b = n%10, c = n, dem = 0;
	while(c>=10){
		c /= 10;
		dem++;
	}
	n = b*pow(10,dem) + ((int)(n - c*pow(10,dem)) / 10) * 10 + c;
	printf("%d", n);
	return 0;
}
