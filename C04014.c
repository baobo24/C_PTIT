#include<stdio.h>
#include<math.h>
int main(){
	int t;
    scanf("%d", &t);
	for(int k=1; k<=t; k++){
		int n, i;
		scanf("%d", &n);
		int a[n], dem[10000] = {0};
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
			dem[a[i]] ++;
		}
		printf("Test %d:\n", k);
		for(i=0; i<n; i++){
			if(dem[a[i]] > 0){
				printf("%d xuat hien %d lan\n", a[i], dem[a[i]]);
				dem[a[i]] = 0;
			}
		}
	}
	return 0;
}
