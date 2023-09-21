#include<stdio.h>
#include<math.h>
int main(){
	int n, i;
		scanf("%d", &n);
		int a[n], count = 0;
		int dem1[100] = {0}, dem2[100] = {0};
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
			dem1[a[i]]++;
			dem2[a[i]]++;
		}
		for(i=0; i<n; i++){
			if(dem1[a[i]] > 1)
				count ++;
			dem1[a[i]] = 0;
		}
		printf("%d\n", count);
		for(i=0; i<n; i++){
			if(dem2[a[i]] > 1)
				printf("%d ", a[i]);
			dem2[a[i]] = 0;	
		}
	return 0;
}
