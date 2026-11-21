#include<stdio.h>
int main() {
    long long n,i;
    printf("Enter n\n");
    scanf("%lld",&n);
    for(i=1;i*i<=n;i++) {
        if(n%i==0) {
            printf("%lld ",i);
        }
    }
    i--;
    for(;i>=1;i--) {
        if(n%i==0 && i*i!=n) {
            printf("%lld ",n/i);
        }
    }
    printf("\n");
}