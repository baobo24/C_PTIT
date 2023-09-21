#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[20];
		scanf("%s", c);
		int check = 1;
		for(int i=0; i<strlen(c); i++){
			if(c[i] != '0' && c[i] != '1' && c[i] != '8' && c[i] != '9'){
				printf("INVALID");
				check = 0;
				break;
			}
			if(c[i] == '8' || c[i] == '9')
                c[i] = '0';
		}
		if(check){
			int dem = 0;
			for(int i=0; i<strlen(c); i++){
				if(c[i] != '0') dem = 1;
				if(dem) printf("%c", c[i]);
			}
			if(dem == 0) printf("INVALID");
		}
		printf("\n"); 
	}
	return 0;
}
