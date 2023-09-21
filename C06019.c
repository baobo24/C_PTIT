#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	char c[100], d[100][100];
    gets(c);
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
	for(int i=0; i<n; i++){
		if(i<n-1)
			printf("%c", d[i][0]);
		else
			printf("%s@ptit.edu.vn", d[i]);
	}
	return 0;
}
