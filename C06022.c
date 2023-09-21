#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct sinhvien{
	int ma;
	char ten[100];
	double A, B, C, tong;
};
typedef struct sinhvien sv;
void nhap(sv *a){
	getchar();
	gets(a->ten);
	scanf("%lf %lf %lf", &a->A, &a->B, &a->C);
	a->tong = a->A + a->B + a->C;
void in(sv a){
	printf("%d %s %.1lf %.1lf %.1lf\n", a.ma, a.ten, a.A, a.B, a.C);
}
int cmp(const void *a, const void *b){
	sv *x = (sv*)a;
	sv *y = (sv*)b;
	if(x->tong < y->tong)
		return -1;
	else return 1;
}
sv a[100];
int n=0;

void cn1(){
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		a[i].ma = i;
		nhap(&a[i]);
	}            
	a[i].tong = a[i].A + a[i].B + a[i].C;
	printf("%d\n", n);
}

void cn2(){
	sv b;
	scanf("%d", &b.ma);
	nhap(&b);
	a[b.ma] = b;
	printf("%d\n", b.ma);
}
void cn3(){
//	qsort(a, n, sizeof(a[0]), cmp);
	for(int i=1; i<=n; i++){
		in(a[i]);
	}
}

int main(){
	int t=0;
	while(t != 3){
		scanf("%d", &t);
		switch(t){
			case 1: cn1(); break;				
			case 2: cn2(); break;
			case 3: cn3(); break;				
		}
	}
	return 0;
}
