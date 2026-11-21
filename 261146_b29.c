#include <stdio.h>

void f(char *s){
    int i;
    for(i=0; s[i]!='\0'; i++){
        if(s[i]>='a' && s[i]<='z') s[i]-=32;
        else if(s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
}

int main(){
    char s[]="aBc";
    f(s);
    printf("%s", s);
    return 0;
}