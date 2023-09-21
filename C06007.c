#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	char c[100], d[100];
	gets(c);
	gets(d);
	char a[1000][50];
	char *token = strtok(c, " ");
	int n = 0;
	while(token != NULL){
		if(strcmp(token, d) != 0){
			strcpy(a[n], token);
			n++;
		}
		token = strtok(NULL, " ");
	}
	for(int i=0; i<n; i++){
		printf("%s ", a[i]);
	}
	return 0;
}
