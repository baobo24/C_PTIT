#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
struct sv{
	int ma;
	char ten[100], ngaysinh[100];
	double A, B, C, tong;
};
typedef struct sv sv;

void nhap(sv *a){
	getchar();
	gets(a->ten);
	scanf("%s %lf %lf %lf", &a->ngaysinh, &a->A, &a->B, &a->C);
}
void in(sv a){
	printf("%d %s %s %.1lf\n", a.ma, a.ten, a.ngaysinh, a.tong);
}

int main(){
	int n;
	scanf("%d", &n);
	sv a[n];
	for(int i=0; i<n; i++){
		a[i].ma = i+1;
		nhap(&a[i]);
		a[i].tong = a[i].A + a[i].B + a[i].C;
	}
	double max = -1e9;
	for(int i=0; i<n; i++){
		max = fmax(max, a[i].tong);
	}
	for(int i=0; i<n; i++){
		if(a[i].tong == max)
			in(a[i]);
	}
	return 0;
}
