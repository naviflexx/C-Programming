#include <stdio.h>

int f(int *a, int n){
    int l=0, r=n-1, m=0, h, w;
    while(l<r){
        h=a[l]<a[r] ? a[l] : a[r];
        w=h*(r-l);
        if(w>m) m=w;
        if(a[l]<a[r]) l++;
        else r--;
    }
    return m;
}

int main(){
    int a[]={1,8,6,2,5,4,8,3,7}, n=9;
    printf("%d", f(a, n));
    return 0;
}