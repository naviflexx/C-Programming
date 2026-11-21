#include <stdio.h>

int f(int *a, int n, int k){
    int l=0, h=n-1, m;
    while(l<=h){
        m=l+(h-l)/2;
        if(a[m]-(m+1)<k) l=m+1;
        else h=m-1;
    }
    return l+k;
}

int main(){
    int a[]={2,3,4,7,11}, n=5, k=5;
    printf("%d", f(a, n, k));
    return 0;
}