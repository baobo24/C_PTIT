#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct sp{
	int ma;
	char ten[1000], nhom[1000];
	double giaban, giamua, lai;
};
typedef struct sp sp;

void in(sp a){
	printf("%d %s %s %.2lf\n", a.ma, a.ten, a.nhom, a.lai);
}

int cmp(const void *a, const void *b){
	sp *x = (sp*)a;
	sp *y = (sp*)b;
	if(x->lai < y->lai)
		return 1;
	else
		return -1;	
}

int main(){
	int n;
	scanf("%d", &n);
	sp a[n];
	for(int i=0; i<n; i++){
		a[i].ma = i+1;
		scanf("\n");
		gets(a[i].ten); 
		scanf("\n");
		gets(a[i].nhom);
		scanf("%lf %lf", &a[i].giamua, &a[i].giaban);
		a[i].lai = a[i].giaban - a[i].giamua;
	}
	qsort(a, n, sizeof(sp), cmp);
	for(int i=0; i<n; i++){
		in(a[i]);
	}
	return 0;
}
