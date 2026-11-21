#include<stdio.h>
int main() {
    int a[100],n,t,i,d,s,m;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter numbers\n");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter t\n");
    scanf("%d",&t);
    m=a[0];
    for(i=0;i<n;i++) {
        if(a[i]>m) {
            m=a[i];
        }
    }
    for(d=1;d<=m;d++) {
        s=0;
        for(i=0;i<n;i++) {
            s=s+(a[i]+d-1)/d;
        }
        if(s<=t) {
            printf("%d\n",d);
            break;
        }
    }
}