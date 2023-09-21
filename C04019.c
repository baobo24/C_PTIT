#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i;
		scanf("%d", &n);
		int a[n];
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
		}	
		int dem = 0;
		for(i=0; i<n-1; i++){
			if(a[i] == a[i+1])
				dem++;
		}
		printf("%d\n", dem);
	}
	return 0;
}
