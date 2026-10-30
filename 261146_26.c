#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long a[n];
    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }
    long long c=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > 2*a[j]){
                c++;
            }
        }
    }
    printf("%lld", c);

}