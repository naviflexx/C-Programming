#include <stdio.h>

int f(char *s, int n){
    int l[3]={-1,-1,-1}, r=0, i, m;
    for(i=0; i<n; i++){
        l[s[i]-'a']=i;
        m=l[0];
        if(l[1]<m) m=l[1];
        if(l[2]<m) m=l[2];
        r+=m+1;
    }
    return r;
}

int main(){
    char s[]="abbac";
    int n=5;
    printf("%d", f(s, n));
    return 0;
}