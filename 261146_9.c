#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    int tri[n][n];
    for(int i=0; i<n; i++){
        tri[i][0] = 1;
        tri[i][i] = 1;
        for(int j=1; j<i; j++){
            tri[i][j] = tri[i-1][j-1] + tri[i-1][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(i==5){
                printf("%d " , tri[i][j]);
            }
        }
    }
}