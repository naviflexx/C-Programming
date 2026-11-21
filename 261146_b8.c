#include<stdio.h>
int main() {
    char a[100],b[100],c[200];
    int d[256]={0},i,f;
    f=1;
    printf("Enter a\n");
    scanf("%s",a);
    printf("Enter b\n");
    scanf("%s",b);
    printf("Enter c\n");
    scanf("%s",c);
    for(i=0;a[i]!='\0';i++) {
        d[a[i]]++;
    }
    for(i=0;b[i]!='\0';i++) {
        d[b[i]]++;
    }
    for(i=0;c[i]!='\0';i++) {
        d[c[i]]--;
    }
    for(i=0;i<256;i++) {
        if(d[i]!=0) {
            f=0;
        }
    }
    if(f==1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}