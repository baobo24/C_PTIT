#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int check(char c[]){
	int chan=0, le=0;
	if(c[0] == '0') return -1;
	for(int i=0; i<strlen(c); i++){
		if(c[i]=='1' || c[i]=='3' || c[i]=='5' || c[i]=='7' || c[i]=='9')
			le++;
		else if(c[i]=='0' || c[i]=='2' || c[i]=='4' || c[i]=='6' || c[i]=='8')
			chan++;
		else return -1;
	}
	if(le>chan && strlen(c)%2 == 1)
		return 1;
	if(chan>le && strlen(c)%2 == 0)
		return 1;
	return 0;	
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[1000];
		scanf("%s", &c);
		if(check(c) == 1)
			printf("YES\n");
		else if(check(c) == 0)
			printf("NO\n");
		else
			printf("INVALID\n");
	}
	return 0;
}
