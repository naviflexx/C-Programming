#include <stdio.h>
#include <string.h>

void f(char *s, int l, int n){
    int i, j, t, u;
    if(l==n-1){
        printf("%s\n", s);
        return;
    }
    for(i=l; i<n; i++){
        u=0;
        for(j=l; j<i; j++){
            if(s[j]==s[i]){ u=1; break; }
        }
        if(u) continue;
        t=s[l]; s[l]=s[i]; s[i]=t;
        f(s, l+1, n);
        t=s[l]; s[l]=s[i]; s[i]=t;
    }
}

int main(){
    char s[]="aab";
    f(s, 0, strlen(s));
    return 0;
}