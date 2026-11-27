#include <stdio.h>
#include <stdlib.h>

int c(const void *x, const void *y){
    return *(int*)x - *(int*)y;
}

int main(){
    int n, k, i, l, h, a=0, b=0;
    scanf("%d", &n);
    int p[n];
    for(i=0; i<n; i++) scanf("%d", &p[i]);
    scanf("%d", &k);
    qsort(p, n, sizeof(int), c);
    l=0; h=n-1;
    while(l<=h){
        a+=p[l];
        l++;
        h-=k;
    }
    l=0; h=n-1;
    while(l<=h){
        b+=p[h];
        h--;
        l+=k;
    }
    printf("%d %d", a, b);
    return 0;
}