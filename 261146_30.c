#include<stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    long long M=1000000007;
    long long r=1;
    long long b=5;
    long long e=(n+1)/2;
    while(e > 0){
        if(e%2 == 1){
            r=r*b%M;
        }
        b=b*b%M;
        e=e/2;
    }
    b=4;
    e=n/2;
    while(e > 0){
        if(e%2 == 1){
            r=r*b%M;
        }
        b=b*b%M;
        e=e/2;
    }
    printf("%lld", r);
