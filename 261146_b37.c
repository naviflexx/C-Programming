#include <stdio.h>
#include <string.h>

void f(char *s, char *t){
    int n=strlen(s), m=strlen(t), c[256]={0}, i, l=0, r, k=m, b=n+1, p=0;
    for(i=0; i<m; i++) c[(unsigned char)t[i]]++;
    for(r=0; r<n; r++){
        if(c[(unsigned char)s[r]]>0) k--;
        c[(unsigned char)s[r]]--;
        while(k==0){
            if(r-l+1<b){
                b=r-l+1;
                p=l;
            }
            c[(unsigned char)s[l]]++;
            if(c[(unsigned char)s[l]]>0) k++;
            l++;
        }
    }
    if(b>n) return;
    for(i=p; i<p+b; i++) printf("%c", s[i]);
}

int main(){
    char s[]="ADOBECODEBANC", t[]="ABC";
    f(s, t);
    return 0;
}