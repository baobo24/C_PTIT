#include<stdio.h>
#include<math.h>

int main(){
	int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n-1; i++){
		int pos=i;
		for(int j=i+1; j<n; j++){
			if(a[j] < a[pos]){
				pos = j;
			}
		}
		int temp = a[i];
                a[i] = a[pos];
                a[pos] = temp;
		for(int k=0; k<n; k++){
        	printf("%d ", a[k]);
    	}
    	printf("\n");
	}
	return 0;
}
