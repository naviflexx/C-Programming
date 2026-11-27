#include <stdio.h>

int main(){
    char s[1000];
    int i;
    fgets(s, 1000, stdin);
    for(i=0; s[i]!='\0' && s[i]!='\n'; i++){
        if(s[i]==' ') printf("@40");
        else printf("%c", s[i]);
    }
    return 0;
}