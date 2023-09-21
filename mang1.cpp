#include <stdio.h>
//Cho mot mang so nguyen ?? khong qua 10k phan tu ....
void nhap (int a[], int n){
    printf("Nhap cac phan tu trong mang\n");
    for (int i = 0; i < n; i++){
        scanf ("%d", &a[i]);
    }
}
 int main (){
    int n, a[1000];
    scanf("%d", &n);
    nhap(a, n);
    for(int i = 0; i < n; i++){
    	printf("%d ", a[i]);
	}
	return 0;
}