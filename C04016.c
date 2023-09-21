#include<math.h>
#include<stdio.h>

int b[100001]={0};

int check(int m){
    if(m<2) return 0;
    else{
        for(int i=2;i<=sqrt(m);i++){
            if(m%i==0){
                return 0;
                break;
            }
        }
        return 1;
    }
}

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void selection(int a[], int n){
    int min_pos;
    int sum=1;
    for(int i=0;i<n;i++){
        min_pos=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_pos]){
                min_pos=j;
            }
        }
        swap(&a[min_pos],&a[i]);
    }
}

int main(){
    int t;
    int test=1;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        int c[n];
        int count =0;
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
            b[a[i]]++;
        }
        for(int i=0;i<n;i++){
            if(check(a[i])){
                c[count]=a[i];
                count++;
            }
        }
        selection(c,count);
        printf("Test %d:\n", test);
        test++;
        for(int i=0;i<count;i++){
            if(b[c[i]]>=1){
                printf("%d xuat hien %d lan\n", c[i],b[c[i]]);
                b[c[i]]=0;
            }
        }
    }
    return 0;
}
