#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int check(char a[],char b[]){
	if(strlen(a)!=strlen(b)) return 1;
	else{
		for(int i=0;i<strlen(a);i++){
			if(a[i] != b[i]) return 1;
		}
		return 0;
	}
}

int cmp(const void *a,const void *b){
	char *x=(char*)a;
	char *y=(char*)b;
	return strcmp(x,y);
}

int main(){
	char a[101],b[101];
	gets(a);
	gets(b);
	char *token=strtok(a," ");
	char c[1000][100];
	int n=0;
	while(token!=NULL){
		strcpy(c[n],token);
		++n;
		token=strtok(NULL," ");
	}
	char *manh=strtok(b," ");
	char d[1000][100];
	int m=0;
	while(manh!=NULL){
		strcpy(d[m],manh);
		++m;
		manh=strtok(NULL," ");
	}
	char g[1000][100];
	int h=0;
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<m;j++){
			if(check(c[i],d[j])) ++cnt;
		}
		if(cnt==m){
			strcpy(g[h],c[i]);
			++h;
		}	
	}
	qsort(g,h,sizeof(g[0]),cmp);
	for(int i=0;i<h;i++){
		printf("%s ",g[i]);
	}
}