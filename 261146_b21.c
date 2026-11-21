#include <stdio.h>

int f(int *a, int n, int k){
    int s=0, m, i;
    for(i=0; i<k; i++) s+=a[i];
    m=s;
    for(i=0; i<k; i++){
        s+=a[n-1-i] - a[k-1-i];
        if(s>m) m=s;
    }
    return m;
}

int main(){
    int a[]={1,2,3,4,5,6,1}, k=3;
    printf("%d", f(a, 7, k));
    return 0;
}