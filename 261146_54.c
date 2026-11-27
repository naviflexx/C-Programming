#include <stdio.h>
#include <stdlib.h>

int c(const void *x, const void *y){
    int *p=(int*)x, *q=(int*)y;
    if(p[0]!=q[0]) return p[0]<q[0] ? -1 : 1;
    if(p[1]!=q[1]) return p[1]<q[1] ? -1 : 1;
    return 0;
}

int main(){
    int n, i;
    scanf("%d", &n);
    int a[n][2];
    for(i=0; i<n; i++) scanf("%d %d", &a[i][0], &a[i][1]);
    qsort(a, n, sizeof(a[0]), c);
    for(i=0; i<n; i++) printf("%d %d\n", a[i][0], a[i][1]);
    return 0;
}