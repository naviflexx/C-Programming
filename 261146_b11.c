#include<stdio.h>
int main() {
    int a[100],n,i,j,m;
    m=0;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter numbers\n");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j] && j-i>m) {
                m=j-i;
            }
        }
    }
    printf("%d\n",m);
}