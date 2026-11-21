#include<stdio.h>
int main() {
    int a[100],n,i,j,x,y,p,m;
    m=0;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter fruits\n");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        p=0;
        for(j=i;j<n;j++) {
            if(p==0) {
                x=a[j];
                p=1;
            } else if(a[j]==x) {
                p=p;
            } else if(p==1) {
                y=a[j];
                p=2;
            } else if(a[j]!=y) {
                break;
            }
            if(j-i+1>m) {
                m=j-i+1;
            }
        }
    }
    printf("%d\n",m);
}