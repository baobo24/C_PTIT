#include<stdio.h>
#include<math.h>

int snt(int n){
	if(n < 2) 
		return 0;
	for(int t=2; t <= sqrt(n); t++){
		if(n % t == 0)
			return 0;	
	}
	return 1;
}		
int main(){
	int m;
	scanf("%d", &m);
	for(int i=1; i<=m; i++){
		int a, b, dem = 0;
		scanf("%d %d", &a, &b);
		for(int j = a; j<=b; j++){
			int temp = j;
			if(snt(j) != 1) 
				continue;
			while(temp>0){
				int d = temp%10;
				if(snt(d) != 1) break;
				temp /= 10;	
			}
			if(temp == 0) dem ++;
		}
		printf("%d\n", dem);
	}
	return 0;
}
