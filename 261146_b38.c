#include <stdio.h>

int f(int *a, int n, int k){
    int l=0, r, s=0, m=n+1;
    for(r=0; r<n; r++){
        s+=a[r];
        while(s>=k){
            if(r-l+1<m) m=r-l+1;
            s-=a[l];
            l++;
        }
    }
    return m>n ? 0 : m;
}

int main(){
    int a[]={2,3,1,2,4,3}, n=6, k=7;
    printf("%d", f(a, n, k));
    return 0;
}