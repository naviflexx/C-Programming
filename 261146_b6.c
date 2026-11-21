#include<stdio.h>
int main() {
    int a[100],n,i,o,s,m,v;
    o=0;
    s=0;
    m=0;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter numbers\n");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        if(a[i]==1) {
            o++;
            v=-1;
        } else {
            v=1;
        }
        s=s+v;
        if(s<0) {
            s=0;
        }
        if(s>m) {
            m=s;
        }
    }
    printf("%d\n",o+m);
}