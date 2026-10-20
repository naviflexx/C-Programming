#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char s[n][201];
    for(int i=0; i<n; i++){
        scanf("%s", s[i]);
    }
    int l=0;
    while(s[0][l] != '\0'){
        char c=s[0][l];
        int k=1;
        for(int i=1; i<n; i++){
            if(s[i][l] != c){
                k=0;
                break;
            }
        }
        if(k == 0){
            break;
        }
        l++;
    }
    for(int i=0; i<l; i++){
        printf("%c", s[0][i]);
    }

}