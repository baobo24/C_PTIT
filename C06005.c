#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	char c[100];
	gets(c);
	for(int i=0; i<strlen(c); i++){
		c[i] = tolower(c[i]);
	}
	char d[100][50];
	int n=0, dem[100] = {0};
	char *token = strtok(c, " ");	
	while(token != NULL){
		strcpy(d[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	for(int i=0; i<n; i++){
		if(dem[i] == 0){
			int count = 1;
			for(int j=i+1; j<n; j++){
				if(strcmp(d[i], d[j]) == 0){
					count ++;
					dem[j] = 1;
				}
			}
			printf("%s %d\n", d[i], count);	
		}
	}
	return 0;
}
