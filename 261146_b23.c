#include <stdio.h>

void f(int *a, int n){
    int b[n], k=0, i;
    for(i=0; i<n; i++) if(a[i]%2==0) b[k++]=a[i];
    for(i=0; i<n; i++) if(a[i]%2!=0) b[k++]=a[i];
    for(i=0; i<n; i++) a[i]=b[i];
}

int main(){
    int a[]={3,8,5,2,7,4,6}, n=7, i;
    f(a, n);
    for(i=0; i<n; i++) printf("%d ", a[i]);
    return 0;
}