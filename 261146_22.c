#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int l=0;
    int r=n-1;
    while(l < r){
        int m=(l+r)/2;
        if(a[m] < a[m+1]){
            l=m+1;
        }
        else{
            r=m;
        }
    }
    printf("%d", l);

}