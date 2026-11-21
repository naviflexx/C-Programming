#include<stdio.h>
int f(int s[],int e[],int n) {
    int i,j;
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(s[i]<e[j] && s[j]<e[i]) {
                return 1;
            }
        }
    }
    return 0;
}
int main() {
    int s[100],e[100],n,i;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter start end\n");
    for(i=0;i<n;i++) {
        scanf("%d%d",&s[i],&e[i]);
    }
    if(f(s,e,n)==1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}