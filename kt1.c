#include<stdio.h>
#include<math.h>

int main(){
	int n, i;
	scanf("%d", &n);
	int a[n], dem[101] = {0};
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	if (a[0] != 25) {
        printf("NO\n");
        return 0;
	}
	dem[25]++;
	int check = 1;
	for(i=1; i<n; i++){
		if(a[i] != 100){
			dem[a[i]]++;
		}
		else if(a[i] == 50 && dem[25] >=1){
			dem[50]++;
			dem[25]--;		
		}
		else if(a[i] == 100 ){
			if(dem[25] >=1 && dem[50] >=1){
				dem[25]--;
				dem[50]--;
			}
			if(dem[25] >=3)
				dem[25] -= 3;
		}
		else{
			check = 0;
		}
	}
	if(check) printf("YES\n");
	else printf("NO\n");
	return 0;
}
