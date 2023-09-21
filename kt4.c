#include <stdio.h>
#include <math.h>


int dem(int N, int p) {
    int x = 0;
    while (N >= p) {
        x += N / p;
        N = N / p;
    }
    return x;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, p;
        scanf("%d %d", &N, &p);
        int x = dem(N, p);
        int max_x = (int)(log(N) / log(p)); 
        printf("%d\n", x / max_x); 
    }
    return 0;
}
