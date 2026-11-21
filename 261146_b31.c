#include <stdio.h>

void f(int *a, int n){
    int i, j;
    printf("[");
    int c=0;
    for(i=0; i<n; i++){
        if(a[i]<=0) continue;
        for(j=0; j<n; j++){
            if(a[j]==-a[i]){
                if(c) printf(", ");
                printf("(%d, %d)", a[j], a[i]);
                c=1;
            }
        }
    }
    printf("]");
}

int main(){
    int a[]={4,-4,8,-8,3,-2,2}, n=7;
    f(a, n);
    return 0;
}