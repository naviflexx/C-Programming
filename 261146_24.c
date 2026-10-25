#include<stdio.h>

int main(){
    char s[10001];
    fgets(s, 10001, stdin);
    int n=0;
    while(s[n] != '\0' && s[n] != '\n'){
        n++;
    }
    int f=0;
    int i=n-1;
    while(i >= 0){
        while(i >= 0 && s[i] == ' '){
            i--;
        }
        if(i < 0){
            break;
        }
        int e=i;
        while(i >= 0 && s[i] != ' '){
            i--;
        }
        if(f > 0){
            printf(" ");
        }
        for(int j=i+1; j<=e; j++){
            printf("%c", s[j]);
        }
        f++;
    }

}