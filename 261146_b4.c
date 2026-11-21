#include<stdio.h>
int main() {
    int a[100],n,i,f;
    f=0;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter numbers\n");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        if(a[i]==i) {
            printf("%d ",i);
            f=1;
        }
    }
    if(f==0) {
        printf("-1");
    }
    printf("\n");
}