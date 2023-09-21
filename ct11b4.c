#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct sv{
	char ten[50], ngaysinh[50], diachi[20];
	double gpa;
	int stt;
};
typedef struct sv sv;

void in(sv a){
	printf("%s %s %s %.2lf\n", a.ten, a.ngaysinh, a.diachi, a.gpa);
}

int cmp(const void *a, const void *b){
	sv *x = (sv*)a;
	sv *y = (sv*)b;
	if(x->gpa != y->gpa){
		if(x->gpa < y->gpa)
			return 1;
		else
			return -1;
	}
	else{
		return x->stt - y->stt;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	sv a[n];
	for(int i=0; i<n; i++){
		a[i].stt = i+1;
		getchar(); 
		fgets(a[i].ten, 50, stdin); a[i].ten[strlen(a[i].ten) - 1] = '\0'; 
		fgets(a[i].ngaysinh, 50, stdin); a[i].ngaysinh[strlen(a[i].ngaysinh) - 1] = '\0';
		fgets(a[i]. diachi, 20, stdin); a[i].diachi[strlen(a[i].diachi) - 1] = '\0';
		scanf("%lf", &a[i].gpa);
	}
	qsort(a, n, sizeof(sv), cmp);
	for(int i=0; i<n; i++){
		in(a[i]);
	}
	return 0;
}