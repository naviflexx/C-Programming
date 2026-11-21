#include <stdio.h>
#include <stdlib.h>

int c(const void *x, const void *y){
    return *(int*)x - *(int*)y;
}

int f(int *a, int n, int k){
    int r, i, h, l;
    qsort(a, n, sizeof(int), c);
    r=a[n-1]-a[0];
    for(i=0; i<n-1; i++){
        if(a[i+1]-k<0) continue;
        h=a[i]+k;
        if(a[n-1]-k>h) h=a[n-1]-k;
        l=a[0]+k;
        if(a[i+1]-k<l) l=a[i+1]-k;
        if(h-l<r) r=h-l;
    }
    return r;
}

int main(){
    int a[]={1,2,3,4,5}, n=5, k=2;
    printf("%d", f(a, n, k));
    return 0;
}