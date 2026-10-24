#include<stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    int f=0;
    for(long long i=2; i*i<=n; i++){
        while(n%i == 0){
            if(f > 0){
                printf(", ");
            }
            printf("%lld", i);
            f++;
            n=n/i;
        }
    }
    if(n > 1){
        if(f>0){
            printf(", ");
        }
        printf("%lld", n);
    }

}