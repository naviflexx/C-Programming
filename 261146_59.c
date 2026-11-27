#include <stdio.h>

long long g(long long a, long long b, long long *x, long long *y){
    long long p, q, d;
    if(b==0){
        *x=1; *y=0;
        return a;
    }
    d=g(b, a%b, &p, &q);
    *x=q;
    *y=p-(a/b)*q;
    return d;
}

int main(){
    long long n, m, x, y, d;
    scanf("%lld %lld", &n, &m);
    if(m==1){
        printf("-1");
        return 0;
    }
    d=g(n%m, m, &x, &y);
    if(d!=1) printf("-1");
    else printf("%lld", ((x%m)+m)%m);
    return 0;
}