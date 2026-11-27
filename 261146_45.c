#include <stdio.h>
#include <stdlib.h>

int c(const void *x, const void *y){
    return *(int*)x - *(int*)y;
}

int f(int *a, int n, int x){
    int i=0, j=1;
    if(x<0) x=-x;
    qsort(a, n, sizeof(int), c);
    while(i<n && j<n){
        if(i!=j && a[j]-a[i]==x) return 1;
        if(a[j]-a[i]<x) j++;
        else i++;
    }
    return 0;
}

int main(){
    int a[]={5,20,3,2,5,80}, n=6, x=78;
    printf(f(a, n, x) ? "true" : "false");
    return 0;
}