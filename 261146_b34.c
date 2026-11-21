#include <stdio.h>
#include <string.h>

int g(char *s, char *w){
    int i=0, j=0;
    while(s[i] && w[j]){
        if(s[i]==w[j]) j++;
        i++;
    }
    return w[j]=='\0';
}

char* f(char *s, char d[][20], int n){
    int i, l=0, b=-1;
    for(i=0; i<n; i++){
        if(g(s, d[i])){
            int k=strlen(d[i]);
            if(k>l || (k==l && strcmp(d[i], d[b])<0)){
                l=k;
                b=i;
            }
        }
    }
    if(b==-1) return "";
    return d[b];
}

int main(){
    char s[]="abpcplea";
    char d[4][20]={"ale","apple","monkey","plea"};
    printf("%s", f(s, d, 4));
    return 0;
}