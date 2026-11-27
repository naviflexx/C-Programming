#include <stdio.h>
#include <stdlib.h>

int c(const void *x, const void *y){
    return *(int*)x - *(int*)y;
}

int main(){
    int n, m, i, r;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    if(m==0 || m>n){
        printf("-1");
        return 0;
    }
    qsort(a, n, sizeof(int), c);
    r=a[m-1]-a[0];
    for(i=1; i+m-1<n; i++){
        if(a[i+m-1]-a[i]<r) r=a[i+m-1]-a[i];
    }
    printf("%d", r);
    return 0;
}