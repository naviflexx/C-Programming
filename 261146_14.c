#include<stdio.h>

int main(){
    int n, k;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    int max=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int s=0;
            for(int l=i; l<=j; l++){
                s=s+a[l];
            }
            if(s == k){
                if(j-i+1 > max){
                    max=j-i+1;
                }
            }
        }
    }
    printf("%d", max);

}