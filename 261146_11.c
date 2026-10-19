#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j] > a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    int total=1<<n;
    for(int m=0; m<total; m++){
        int ok=1;
        for(int i=1; i<n; i++){
            if(a[i] == a[i-1]){
                if(((m>>i)&1)==1 && ((m>>(i-1))&1)==0){
                    ok=0;
                }
            }
        }
        if(ok == 1){
            int c=0;
            printf("[");
            for(int i=0; i<n; i++){
                if(((m>>i)&1) == 1){
                    if(c > 0){
                        printf(",");
                    }
                    printf("%d", a[i]);
                    c++;
                }
            }
            printf("]\n");
        }
    }

}