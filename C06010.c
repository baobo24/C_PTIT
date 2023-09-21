#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int thuannghich(char c[]){
	for(int i=0; i<strlen(c)/2; i++){
		if(c[i] != c[strlen(c) - i-1]) 
			return 0;
	}
	return 1;
}
int check(char c[]){
	for(int i=0; i<strlen(c); i++){
		if(c[i] % 2)
			return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[500];
		scanf("%s", c);
		if(check(c) && thuannghich(c))
			printf("YES\n");
		else printf("NO\n");	
	}
	return 0;
}