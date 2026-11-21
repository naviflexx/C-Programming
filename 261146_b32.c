#include <stdio.h>

int f(int *a, int n, int k){
    int *p, *q, *x, t, c, d;
    for(p=a; p<a+n; p++){
        c=0; d=0;
        for(q=a; q<a+n; q++){
            if(*q<*p) c++;
            else if(*q==*p && q<p) d++;
        }
        if(c+d==k-1) return *p;
    }
    return -1;
}

int main(){
    int a[]={7,10,4,3,20,15}, n=6, k=3;
    printf("%d", f(a, n, k));
    return 0;
}