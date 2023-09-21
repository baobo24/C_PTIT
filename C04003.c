#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		int n, j;
		scanf("%d", &n);
		int a[n];
		for(j=0; j<n; j++){
			scanf("%d", &a[j]);
		}
		int check = 0;
		for(j=0; j < n/2; j++){
			if(a[j] == a[n-1-j])
				check = 1;
			else{ 
				check = 0;
				break;
			}
		}
		if(check) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
