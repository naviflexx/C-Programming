#include<stdio.h>

int main(){
    char s[100001], t[100001];
    scanf("%s %s", s, t);
    int a[256], b[256];
    for(int i=0; i<256; i++){
        a[i]=-1;
        b[i]=-1;
    }
    int k=1;
    int i=0;
    while(s[i] != '\0' && t[i] != '\0'){
        int x=(unsigned char)s[i];
        int y=(unsigned char)t[i];
        if(a[x] == -1 && b[y] == -1){
            a[x]=y;
            b[y]=x;
        }
        else if(a[x] != y || b[y] != x){
            k=0;
            break;
        }
        i++;
    }
    if(s[i] != t[i] && k == 1){
        k=0;
    }
    if(k == 1){
        printf("true");
    }
    else{
        printf("false");
    }

}