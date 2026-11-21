#include <stdio.h>

float f(int *a, int n){
    int *p, *q, c, d, k;
    float r=0;
    for(p=a; p<a+n; p++){
        c=0;
        for(q=a; q<a+n; q++){
            if(*q<*p || (*q==*p && q<p)) c++;
        }
        if(n%2==1 && c==n/2) return *p;
        if(n%2==0 && c==n/2-1) r+=*p;
        if(n%2==0 && c==n/2) r+=*p;
    }
    return r/2;
}

int main(){
    int a[]={7,1,3,9,5}, n=5;
    printf("%g", f(a, n));
    return 0;
}