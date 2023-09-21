#include<stdio.h>
#include<math.h>
int snt(int a){
	if(a < 2) 
		return 0;
	for(int i=2; i <= sqrt(a); i++){
		if(a % i == 0)
			return 0;	
	}
	return 1;	
}
int main(){
	int n, i, j;
	scanf("%d", &n);
	int a[n][n], dem[30] = {0};
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &a[i][j]);
			if (snt(a[i][j]))
				dem[i]++;
		}
	}
	int max = -1, check = 1;
	for(i=0; i<n; i++){
		max = fmax(max, dem[i]);
	}
	for(i=0; i<n; i++){
		if(dem[i] == max && check == 1){
			printf("%d\n", i+1);
			for(j=0; j<n; j++){
				if (snt(a[i][j]))
					printf("%d ", a[i][j]);						
			}
			check = 0;
		}
	}
	return 0;
}
