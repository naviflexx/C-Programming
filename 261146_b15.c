#include<stdio.h>
int main() {
    long long n,m,i,j,p;
    printf("Enter n m\n");
    scanf("%lld%lld",&n,&m);
    for(i=1;i<=m;i++) {
        p=1;
        for(j=0;j<n;j++) {
            p=p*i;
            if(p>m) {
                break;
            }
        }
        if(p==m) {
            printf("%lld\n",i);
            return 0;
        }
        if(p>m) {
            break;
        }
    }
    printf("-1\n");
}