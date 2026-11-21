#include<stdio.h>
int main() {
    int a[10][10],r,c,i,j,o,m,k;
    m=0;
    k=-1;
    printf("Enter r c\n");
    scanf("%d%d",&r,&c);
    printf("Enter matrix\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++) {
        o=0;
        for(j=0;j<c;j++) {
            if(a[i][j]==1) {
                o++;
            }
        }
        if(o>m) {
            m=o;
            k=i;
        }
    }
    printf("%d\n",k);
}