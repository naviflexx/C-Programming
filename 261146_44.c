#include <stdio.h>
#include <stdlib.h>

int c(const void *x, const void *y){
    long long p=*(long long*)x, q=*(long long*)y;
    return p<q ? -1 : p>q;
}

int main(){
    int n, i, j;
    long long r=0, k;
    scanf("%d", &n);
    long long *b=malloc(n*sizeof(long long));
    for(i=0; i<n; i++){
        scanf("%lld", &k);
        b[i]=k-i;
    }
    qsort(b, n, sizeof(long long), c);
    for(i=0; i<n; i=j){
        for(j=i; j<n && b[j]==b[i]; j++);
        r+=(long long)(j-i)*(j-i-1);
    }
    printf("%lld", r);
    return 0;
}