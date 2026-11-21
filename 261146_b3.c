#include<stdio.h>
int main() {
    int a[100],f[100]={0},n,i,j,c,k;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter numbers\n");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    k=n/3;
    for(i=0;i<n;i++) {
        if(f[i]==0) {
            c=1;
            for(j=i+1;j<n;j++) {
                if(a[j]==a[i]) {
                    c++;
                    f[j]=1;
                }
            }
            if(c>k) {
                printf("%d ",a[i]);
            }
        }
    }
    printf("\n");
}