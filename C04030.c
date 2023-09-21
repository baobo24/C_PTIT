#include<stdio.h>
#include<math.h>

int cmp1(const void *a, const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	return *x - *y;
}
int cmp2(const void *a, const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	return *y - *x;
}	
int main(){
	int t; 
	scanf("%d", &t);
	for(int k=1; k<=t; k++){
		int n, i;
		scanf("%d", &n);
		int a[n], b[n];
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(i=0; i<n; i++){
			scanf("%d", &b[i]);
		}
		qsort(a, n, sizeof(int), cmp1);
		qsort(b, n, sizeof(int), cmp2);
		int c=0, d=0;
		printf("Test %d:\n", k);
		for(i=0; i<2*n; i++){
			if(i%2 == 0){
				printf("%d ", a[c]);
				c++;
			}
			else{
				printf("%d ", b[d]);
				d++;
			}
		}
		printf("\n");
	}
	return 0;
}
