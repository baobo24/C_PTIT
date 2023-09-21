#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        char a[100],p=1;
        scanf("%s",&a);
        int b=strlen(a);
        if(b%2==0){
            for(int j=0;j<b/2;j++){
                if (a[j]!=a[b-1-j]){
                    p=p-1;
                }
            }
            if(p==0) printf("YES\n");
            else printf("NO\n");
        } 
		else {
            for(int j=0;j<b/2;j++){
                if (a[j]!=a[b-1-j]){
                    p=p-1;
                }
            }
            if(p==0||p==1) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}
