#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int i=n-2;
    while(i>=0 && a[i] >= a[i+1]){
        i--;
    }
    if(i>=0){
        int j=n-1;
        while(a[j]<=a[i]){
            j--;
        }
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    int l=i+1;
    int r=n-1;
    while(l<r){
        int t=a[l];
        a[l]=a[r];
        a[r]=t;
        l++;
        r--;
    }
    for(int k=0; k<n; k++){
        if(k>0){
            printf(" ");
        }
        printf("%d", a[k]);
    }

}