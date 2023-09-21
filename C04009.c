#include<stdio.h>
#include<math.h>
int main(){
	int n, i;
	scanf("%d", &n);
	int a[n], b[n], c[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int chan=0, le=0;
	for(i=0; i<n; i++){
		if(a[i] % 2 == 0){
			b[chan] = a[i];
			chan++;
		}
		else{
			c[le] = a[i];
			le++;
		}
	}
	for(i=0; i<chan; i++){
		printf("%d ", b[i]);
	}
	printf("\n");
	for(i=0; i<le; i++){
		printf("%d ", c[i]);
	}	
	return 0;
}
