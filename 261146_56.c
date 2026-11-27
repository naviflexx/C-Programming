#include <stdio.h>
#include <stdlib.h>

int c(const void *x, const void *y){
    int *p=(int*)x, *q=(int*)y;
    return p[0]<q[0] ? -1 : p[0]>q[0];
}

int main(){
    int n, i, e, r=0;
    scanf("%d", &n);
    int a[n][2];
    for(i=0; i<n; i++) scanf("%d %d", &a[i][0], &a[i][1]);
    qsort(a, n, sizeof(a[0]), c);
    e=a[0][1];
    for(i=1; i<n; i++){
        if(a[i][0]-e>r) r=a[i][0]-e;
        if(a[i][1]>e) e=a[i][1];
    }
    printf("%d", r);
    return 0;
}