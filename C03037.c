#include<stdio.h>
int main(){
	long long a;
	scanf("%lld", &a);
	int s2=0, s3=0, s5=0, s7=0 ;
	while(a>0){
		int b = a%10 ;
		if(b==2) s2++;
		if(b==3) s3++;
		if(b==5) s5++;
		if(b==7) s7++;
		a /=10;
	}
	if(s2>0) printf("2 %d\n", s2);
	if(s3>0) printf("3 %d\n", s3);
	if(s5>0) printf("5 %d\n", s5);
	if(s7>0) printf("7 %d\n", s7);
	return 0;
}
