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
	int n, a[100], dem = 0;
    scanf ("%d", &n);
    for(int i=0; i<n; i++){
        scanf ("%d", &a[i]);
        if(snt(a[i]) == 1)
			dem++;	
    }
    printf("%d ", dem);
    for (int i=0; i<n; i++){
        if(snt(a[i]) == 1)
        	printf("%d ", a[i]);
    }
    
	return 0;
}
