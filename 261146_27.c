#include<stdio.h>

int main(){
    int n, k;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    int c=0;
    for(int i=0; i<n; i++){
        int x=0;
        for(int j=i; j<n; j++){
            x=x^a[j];
            if(x == k){
                c++;
            }
        }
    }
    printf("%d", c);

}