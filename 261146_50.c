#include <stdio.h>
#include <stdlib.h>

int c(const void *x, const void *y){
    return *(int*)x - *(int*)y;
}

int main(){
    int n, i, d, r=0;
    scanf("%d", &n);
    int a[n], b[n];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=0; i<n; i++) scanf("%d", &b[i]);
    qsort(a, n, sizeof(int), c);
    qsort(b, n, sizeof(int), c);
    for(i=0; i<n; i++){
        d=abs(a[i]-b[i]);
        if(d>r) r=d;
    }
    printf("%d", r);
    return 0;
}