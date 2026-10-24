#include<stdio.h>

int main(){
    char s[100001];
    scanf("%s", s);
    int c[256];
    for(int i=0; i<256; i++){
        c[i]=0;
    }
    int n=0;
    while(s[n]!='\0'){
        c[(unsigned char)s[n]]++;
        n++;
    }
    int f=0;
    while(1){
        int m=0;
        int p=0;
        for(int i=0; i<256; i++){
            if(c[i] > m){
                m=c[i];
                p=i;
            }
        }
        if(m==0){
            break;
        }
        if(f>0){
            printf(" ");
        }
        printf("%c", p);
        c[p]=0;
        f++;
    }

}