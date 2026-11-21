#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int f(char *s, char *a, char *b){
    char *t, *w;
    int i=0, p=-1, q=-1, r=-1, d;
    t=strdup(s);
    for(w=strtok(t, " "); w; w=strtok(NULL, " "), i++){
        if(strcmp(w, a)==0) p=i;
        if(strcmp(w, b)==0) q=i;
        if(p!=-1 && q!=-1){
            d=p>q?p-q:q-p;
            if(r==-1 || d<r) r=d;
        }
    }
    free(t);
    return r;
}

int main(){
    char s[]="the quick brown fox quick";
    printf("%d", f(s, "the", "quick"));
    return 0;
}