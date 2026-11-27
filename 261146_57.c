#include <stdio.h>

int main(){
    char s[100005];
    int c[26]={0}, i, j;
    scanf("%s", s);
    for(i=0; s[i]!='\0'; i++) c[s[i]-'a']++;
    for(i=0; i<26; i++){
        for(j=0; j<c[i]; j++) printf("%c", 'a'+i);
    }
    return 0;
}