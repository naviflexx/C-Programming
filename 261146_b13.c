#include<stdio.h>
int main() {
    int n,r;
    printf("Enter n\n");
    scanf("%d",&n);
    r=(n>0) && ((n&(n-1))==0);
    printf("%d\n",r);
}