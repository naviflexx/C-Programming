#include <stdio.h>

int main(){
    int n, i, t, k=1;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=0; i<n-1; i++){
        if(i%2==0 && a[i]>a[i+1]){
            t=a[i]; a[i]=a[i+1]; a[i+1]=t;
        }
        else if(i%2==1 && a[i]<a[i+1]){
            t=a[i]; a[i]=a[i+1]; a[i+1]=t;
        }
    }
    for(i=1; i<n; i++){
        if(i%2==1 && a[i]<a[i-1]) k=0;
        if(i%2==0 && a[i]>a[i-1]) k=0;
    }
    printf(k ? "true" : "false");
    return 0;
}