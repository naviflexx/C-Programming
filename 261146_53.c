#include <stdio.h>
#include <stdlib.h>

int c(const void *x, const void *y){
    return *(int*)x - *(int*)y;
}

int main(){
    int n, l, r, i;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d %d", &l, &r);
    qsort(a+l, r-l+1, sizeof(int), c);
    for(i=0; i<n; i++) printf("%d ", a[i]);
    return 0;
}