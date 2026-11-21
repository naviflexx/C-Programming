#include <stdio.h>
#include <stdlib.h>

int c(const void *x, const void *y){
    return *(int*)x - *(int*)y;
}

void f(int *a, int n, int k){
    int i, l, r, s, p=0;
    qsort(a, n, sizeof(int), c);
    printf("[");
    for(i=0; i<n-2; i++){
        if(i>0 && a[i]==a[i-1]) continue;
        l=i+1; r=n-1;
        while(l<r){
            s=a[i]+a[l]+a[r];
            if(s<k) l++;
            else if(s>k) r--;
            else{
                if(p) printf(", ");
                printf("[%d, %d, %d]", a[i], a[l], a[r]);
                p=1;
                l++; r--;
                while(l<r && a[l]==a[l-1]) l++;
                while(l<r && a[r]==a[r+1]) r--;
            }
        }
    }
    printf("]");
}

int main(){
    int a[]={1,2,-1,0,-2,1}, n=6, k=0;
    f(a, n, k);
    return 0;
}