#include <stdio.h>

int b(int x){
    int c=0;
    while(x){
        c+=x&1;
        x>>=1;
    }
    return c;
}

int main(){
    int n, i, j, k, t;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=1; i<n; i++){
        k=a[i];
        t=b(k);
        j=i-1;
        while(j>=0 && b(a[j])<t){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
    for(i=0; i<n; i++) printf("%d ", a[i]);
    return 0;
}