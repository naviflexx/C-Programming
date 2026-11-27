#include <stdio.h>
#include <stdlib.h>

int c(const void *x, const void *y){
    return *(int*)x - *(int*)y;
}

int main(){
    int n, i;
    scanf("%d", &n);
    int a[n], b[n];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=0; i<n; i++) scanf("%d", &b[i]);
    qsort(a, n, sizeof(int), c);
    qsort(b, n, sizeof(int), c);
    for(i=0; i<n; i++){
        if(a[i]>b[i]){
            printf("false");
            return 0;
        }
    }
    printf("true");
    return 0;
}