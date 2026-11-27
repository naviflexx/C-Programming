#include <stdio.h>
#include <string.h>

int main(){
    char s[100005];
    int i, f=0, n;
    char b[100005], t[100005];
    int bl=0, tl=0, k, x;
    scanf("%s", s);
    n=strlen(s);
    for(i=0; i<=n; i++){
        if(i<n && s[i]>='0' && s[i]<='9'){
            if(tl==0 && s[i]=='0'){
                if(i+1>=n || s[i+1]<'0' || s[i+1]>'9'){
                    t[tl++]='0';
                }
            }
            else t[tl++]=s[i];
        }
        else{
            if(tl>0){
                t[tl]='\0';
                if(!f || tl>bl || (tl==bl && strcmp(t, b)>0)){
                    strcpy(b, t);
                    bl=tl;
                    f=1;
                }
                tl=0;
            }
        }
    }
    if(f) printf("%s", b);
    else printf("-1");
    return 0;
}