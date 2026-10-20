#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int max=0;
    int min=n;
    for(int i=0; i<n; i++){
        int c=0;
        for(int j=0; j<n; j++){
            if(a[j]==a[i]){
                c++;
            }
        }
        if(c>max){
            max=c;
        }
        if(c<min){
            min=c;
        }
    }
    printf("%d", max+min);

}