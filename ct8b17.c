#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	if(strlen(x) != strlen(y))
		return strlen(x) - strlen(y);
	else 
		return strcmp(x, y);	
}
int main(){
	char c[1000];
	gets(c);
	char a[1000][50];
	char *token = strtok(c, " ");
	int n = 0;
	while(token != NULL){
		strcpy(a[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	qsort(a, n, sizeof(a[0]), cmp);
	for(int i=0; i<n; i++){
		printf("%s ", a[i]);
	}
	return 0;
}
