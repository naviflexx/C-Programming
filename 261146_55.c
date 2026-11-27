#include <stdio.h>
#include <stdlib.h>

int c(const void *x, const void *y){
    int *p=(int*)x, *q=(int*)y;
    return p[0]<q[0] ? -1 : p[0]>q[0];
}

int main(){
    int n, m, i, e=0, r=0;
    scanf("%d %d", &n, &m);
    int a[m][2];
    for(i=0; i<m; i++) scanf("%d %d", &a[i][0], &a[i][1]);
    qsort(a, m, sizeof(a[0]), c);
    for(i=0; i<m; i++){
        if(a[i][0]>e+1) r+=a[i][0]-e-1;
        if(a[i][1]>e) e=a[i][1];
    }
    if(e<n) r+=n-e;
    printf("%d", r);
    return 0;
}