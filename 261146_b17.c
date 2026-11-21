#include<stdio.h>
int main() {
    int n,i,j,m,d,w,c;
    c=1;
    printf("Enter n\n");
    scanf("%d",&n);
    m=n/2;
    for(i=0;i<n;i++) {
        d=i-m;
        if(d<0) {
            d=-d;
        }
        w=m-d;
        for(j=0;j<n;j++) {
            if(j==m-w || j==m+w) {
                printf("* ");
            } else if(i==m && j>0 && j<n-1) {
                printf("%d ",c);
                c++;
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}