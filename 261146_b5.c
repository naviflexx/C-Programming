#include<stdio.h>
int main() {
    char a[100],b[100];
    int c[256]={0},i,f;
    f=1;
    printf("Enter a\n");
    scanf("%s",a);
    printf("Enter b\n");
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++) {
        c[a[i]]++;
    }
    for(i=0;b[i]!='\0';i++) {
        c[b[i]]--;
    }
    for(i=0;i<256;i++) {
        if(c[i]!=0) {
            f=0;
        }
    }
    if(f==1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}