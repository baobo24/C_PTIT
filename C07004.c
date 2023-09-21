#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct ps{
	int tu, mau;
};
typedef struct ps ps;
int ucln(int a, int b){
	if(b == 0) return a;
	else return ucln(b, a%b);
}
int bcnn(int a, int b){
	return a*b / ucln(a,b);
}

ps toigian(ps a){
	ps res;
	int uc = ucln(abs(a.tu), abs(a.mau));
	res.tu = a.tu/uc;
	res.mau = a.mau/uc; 
	return res;
}
ps tong(ps a, ps b){
	ps res;
	int mc = bcnn(a.mau, b.mau);
	res.mau = mc;
	res.tu = mc/a.mau * a.tu + mc/b.mau * b.tu;
	return toigian(res);
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		ps a, b;
		scanf("%d%d%d%d", &a.tu, &a.mau, &b.tu, &b.mau);
		a = toigian(a); b= toigian(b);
		int mc = bcnn(a.mau, b.mau);
		a.tu = mc/a.mau * a.tu; a.mau = mc;
		b.tu = mc/b.mau * b.tu; b.mau = mc;
		ps cong = tong(a, b);
		ps chia;
		chia.tu = a.tu; chia.mau = b.tu;
		chia = toigian(chia);
		printf("Case #%d:\n", i);
		printf("%d/%d %d/%d\n", a.tu, a.mau, b.tu, b.mau);
		printf("%d/%d\n%d/%d\n", cong.tu, cong.mau, chia.tu, chia.mau);
	}
	return 0;
}
