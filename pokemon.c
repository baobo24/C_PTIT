#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

struct pokemon{
	char loai[100];
	int k, m, soluong;
};
typedef struct pokemon pokemon;

int main(){
	int n;
	scanf("%d", &n);
	pokemon a[n];
	int dem = 0, max = 0;
	for(int i=0; i<n; i++){
		scanf("%s", &a[i].loai);
		scanf("%d %d", &a[i].k, &a[i].m);
		a[i].soluong = 0;		
		while(a[i].k <= a[i].m){
			a[i].m -= a[i].k;
			a[i].m += 2;
			a[i].soluong += 1;
		}
		max = fmax(max, a[i].soluong);
		dem += a[i].soluong;	
	}
	printf("%d\n", dem);
	for(int i=0; i<n; i++){
		if(a[i].soluong == max){
			printf("%s", a[i].loai);
			break;
		}
	}
	return 0;
}
