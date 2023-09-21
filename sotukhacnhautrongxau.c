#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int cmp(const void *a, const void *b){
	char *x = (char *)a;
	char *y = (char *)b;
	return strcmp(x, y);
}
int main(){
	char c[10001], d[10000][100];
    fgets(c, 10001, stdin);
    c[strlen(c)-1] = '\0';
    for(int i=0; i<strlen(c); i++){
    	c[i]= tolower(c[i]);
	}
    char *token = strtok(c, " ");
    int n=0;
	while(token != NULL){
		strcpy(d[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	qsort(d, n, sizeof(d[0]), cmp);
	int dem = 1;
	for(int i=1; i<n; i++){
		if(strcmp(d[i],d[i-1]) != 0)
			dem++;	
	}
	printf("%d", dem);
	return 0;
}
