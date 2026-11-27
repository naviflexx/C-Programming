#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, z, i, j, k, p=0, t;
    scanf("%d %d %d", &x, &y, &z);
    t=x*y*z;
    int *a=malloc(t*sizeof(int)), *b=malloc(t*sizeof(int));
    for(i=0; i<t; i++) scanf("%d", &a[i]);
    for(i=0; i<t; i++) scanf("%d", &b[i]);
    for(i=0; i<x; i++){
        k=1;
        for(j=i*y*z; j<(i+1)*y*z; j++){
            if(a[j]!=b[j]){
                k=0;
                break;
            }
        }
        if(k){
            if(p) printf(" ");
            printf("%d", i);
            p=1;
        }
    }
    return 0;
}