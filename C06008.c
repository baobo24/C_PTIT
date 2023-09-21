#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
    char a[101];
    gets(a);
    char c[100][100],n=0;
    char*word=strtok(a," ");
    while(word!=NULL){
        strcpy(c[n],word);
        ++n;
        word=strtok(NULL," ");
    }
    int k=0;
    int b[100];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(c[i],c[j])==0){
                strcpy(c[j],"");
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s ",c[i]);
    }
}
