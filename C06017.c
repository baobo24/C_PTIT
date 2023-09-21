#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return strcmp(x, y);
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[1000], b[1000];
		gets(a); gets(b);
		char c[100][50], d[100][50];
		int n=0, m=0;
		char *token = strtok(a," ");
		while(token != NULL){
		    strcpy(c[n], token);
		    n++;
		    token = strtok(NULL," ");
		}
		token = strtok(b," ");
		while(token != NULL){
		    strcpy(d[m],token);
		    m++;
		    token = strtok(NULL," ");
		}
		qsort(c, n, sizeof(c[0]), cmp);
		for(int i=0; i<n; i++){
			while(strcmp(c[i], c[i+1]) == 0)
				i++;
			int check = 1;
			for(int j=0; j<m; j++){
				if(strcmp(c[i], d[j]) == 0){
					check = 0;
					break;
				}
			}
			if(check)
				printf("%s ", c[i]);	
		}
		printf("\n");
	}
	return 0;
}
