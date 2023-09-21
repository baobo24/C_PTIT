#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[100];
		gets(c);
		char *token = strtok(c, " ");
		int dem = 0;
		while(token != NULL){
			dem++;
			token = strtok(NULL, " ");
		}
		printf("%d\n", dem);
	}
	return 0;
}
