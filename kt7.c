#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();
	while (t--){
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
		for(int i=1; i<n; i++){
        	d[i][0] = toupper(d[i][0]);
        	printf("%s", d[i]);
        	if(i != n-1) printf(" ");	
		}
		for(int i=0; i<strlen(d[0]); i++){
        	d[0][i] = toupper(d[0][i]);
		}
		printf(", %s", d[0]);
		printf("\n");
    }
    return 0;
}
