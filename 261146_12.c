#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int max=a[0];
    int s=0, e=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int p=1;
            for(int k=i; k<=j; k++){
                p=p*a[k];
            }
            if(p > max){
                max=p;
                s=i;
                e=j;
            }
        }
    }
    printf("%d", max);

}