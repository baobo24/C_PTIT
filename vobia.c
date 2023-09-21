#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int kq = n/28;
	int vo = kq;
	while(vo>=3){
		int chai = vo%3;
		kq += vo/3;
		vo /= 3;
		vo += chai;
	}
	
	printf("%d", kq);
	return 0;
}
